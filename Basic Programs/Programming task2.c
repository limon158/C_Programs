/*          DHAKA INTERNATIONAL UNIVERSSITY
                Programming Task-2
                    CSE-103


SUBMITTED BY:
Liman Halder
Roll-46
Reg. no: CS-D65-115366
*/


//Program 1:
/*Show to even number from 0 to n, also calculate the sum of even number where n
is given by user*/
//Code:

#include <stdio.h>

int main()
{
    int i, start, end, sum=0;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);


    /* If start is not even then make it even */
    if(start%2!=0)
    {
        start++;
    }

    for(i=start; i<=end; i+=2)
    {
        /* Add current even number to sum */
        sum += i;
    }

    printf("Sum of all even number between %d to %d = %d", start, end, sum);

    return 0;
}



//Program 2:
/*Find the largest middle and smallest number among three randomly generated
number The range of random number is 0 to 100. Also continue the program until
user may wish to stop*/

//Code:

#include <stdio.h>
int main()
{
    int num1,num2,num3;//variable declaration
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    //Takse three input num1,num2,num3 from user
//check smallest
    if(num1<num2 && num1<num3){
            //check whether num1 is smallest than num2 and num3
        printf("\n%d is the smallest",num1);
    }//if it is truen this statement is displayed
    else if(num2<num3){
        //when it is false then check num2 or num 3 to small
        printf("\n%d is the smallest",num2);
    }
    else{
        printf("\n%d is the smallest",num3);
    }//all statements are false this statement is displayed
//check largest
    if(num1>num2 && num1>num3){//check largest
            //check whether num1 is largest than num2 and num3
        printf("\n%d is largest",num1);
    }//if it is true this statement is displayed
    else if(num2>num3){
        //when it is false then check num2 or num 3 to large
        printf("\n%d is largest",num2);//when it is true this statements is displayed
    }
    else{
        printf("\n%d is largest",num3);
    }
    //checking for num 1 is middle number or not
    if(num2>num1&&num1>num3||num3>num1&&num1>num2)
    {
        printf("\n%d is a middle number,"num1);
    }
       //Checking for num2 is middle number or not
    else if(num1>num2 && num2>num3 || num3>num2 && num2>num1)
    {
        printf("\n%d is middle number",num2);
    }
    //Checking for num3 is middle number or nor
    else(num1>num3 && num3>num2 || num2>num3 && num3>num1){
        printf("\n %d is middle number",num3)
    }

    return 0;
}

//Program 3:
/* Generate array of random number from o to 50(size of array given by user).
Then calculate the sum of all array element. Also continue this program untill
user may wish to stop*/

//Code:

#include <stdio.h>

int main()
{
    int a[100];
    int num,lower = 1, upper, count = 10, sum=1;
    printf("Enter the array size: ");
    scanf("%d",upper);

    srand(time(0));

    printf("The random numbers are: ");
    for (int i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
    for(num=1;num<upper; i++)
    {
        sum+=a[i];
    }
    printf("sum of all the array element is: %d\n\n",sum);


 return 0;
}




