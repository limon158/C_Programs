/*Execute a calander by C*/
#include<stdio.h>
#define N 300
int main()
{
    int year;
    printf("Enter year for the calandar you want to view :_");
    scanf("%d", &year);
    printf("\n\nCalander of the year %d\n\n", year);
    char *m[N] = {"January", "February", "March", "April", "May", "June",
     "July", "August", "September", "Octobor", "November", "December"};
    char *d[N] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int dm[N] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        dm[1]=29;
    }
    int i, j, k, l, n=12, n2=7, td;
    int sctr=0, ctr=0;
    for(i=0; i<n; i++)
    {
        printf("\t\t %s-%d \t\t\n\n\n", m[i], year);
        for(j=0; j<n2; j++)
        {
            printf("%s\t", d[j]);
        }
        printf("\n\n");
        for(sctr=1; sctr<=ctr; sctr++)
        {
            printf("-\t");
        }
        td = dm[i];
        for(l=1; l<=td; l++)
            {
                printf("%d\t", l);
                ctr++;
                if(ctr>6)
                {
                    ctr = 0;
                    printf("\n");
                }
            }
    
        printf("\n\n");
    }
    return 0;
}