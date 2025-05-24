/*Lab Challenge 1: Armstrong Number
• Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).
• Challenge: Write a program to find all Armstrong numbers between 1 and 1000.*/
#include<stdio.h>
void main()
{
    int num,sum=0,temp;
    printf("enter a number \n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        sum=sum+((num%10)*(num%10)*(num%10));
        num=num/10;
    }
    if(sum==temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not Armstrong");
    }
}
