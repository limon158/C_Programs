 #include<stdio.h>
 #include<stdlib.h>
 #define N 12
 int main()
 {
    system("color 4F");
    int y=2022;
    char *m[N]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char *w[N]={"Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri"};
    int i, j, k;
    for(i=0; i<12; i++)
    {
      printf("\t\t%s-%d\t\t\n\n", m[i], y);
      for(j=0; j<7; j++)
      {
         printf("%s\t", w[j]);
      }
      printf("\n\n");
    }
    
 }