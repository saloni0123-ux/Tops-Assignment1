/*LAB EXERCISE 3: Sum of Digits
• Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
• Challenge: Extend the program to reverse the digits of the number.*/
#include<stdio.h>
main(){
    int num,sum=0;
    printf("enter a number");
    scanf("%d",num);
    while(num>0)
    {
        sum=sum*10+num%10;
        num/=10;
    }
    printf("reverse=%d",sum);
}