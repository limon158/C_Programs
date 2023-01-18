#include<stdio.h>
#include<math.h>
 void main(){
     int a, b,c ,d;
     float x1, x2;
     printf("Input the value of a, b and a c");
     scanf("%d%d%d",&a,b,c);
     d=b*b-4*a*c;

     if(d==0)
     {
         printf("Both roots are equal.\n");
         x1=-b/(2.0*a);
         x2=x1;
         printf("First root Root1=%\n",x1);
         printf("Second root Root2=\n",x2);
     }
    else if(d>0){
        printf("Both root are real and diff-2\n");
        x1=(-b+sqrt(d)/(2*a));
        x2=(-b-sqrt(d)/(2*a));
        printf("First root Root1=%f\n",x1);
        printf("Second root Root2=%f\n",x2);
    }
else
    print("Root are imeainary;\nNo solution");

  return 0;
 }
