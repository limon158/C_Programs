/*
Write a C program that accepts 4 integers p, q, r, s from the user where
 q, r and s are positive and p is even. If q is greater than r and s is 
 greater than p and if the sum of r and s is greater than the sum of p 
 and q print "Correct values", otherwise print "Wrong values"

 here,
 q,r and s is positive
 p is even
 if,
 q>r, s>p, (r+s)>(p+q)
 */

#include<stdio.h>
int main() {

    int p,q,r,s;
    printf("Input the value of p: ");
    scanf("%d", &p);
    printf("Input the value of q: ");
    scanf("%d", &q);
    printf("Input the value of r: ");
    scanf("%d", &r);
    printf("Input the value of s: ");
    scanf("%d", &s);

    if((q>r) && (s>p) && (r+s) > (p+q) && (r>0) && (s>0) &&( p%2==0))
    {
        printf("\nCorrect Values\n");
    }else{

        printf("Wrong Values\n");
    }
  return 0;
}
