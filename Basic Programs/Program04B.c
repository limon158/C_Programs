/*4. Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/

#include<stdio.h>      //Header file
int main()             //Main function
{
    char char1= 'X';
    char char2= 'Y';
    char char3= 'Z';        //Variable declaration
    
    // Now the time to comand that display the result

    printf("The reverse of %c%c%c is %c%c%c",
     char1, char2, char3,
     char3, char2, char1);

    return 0;
}