#include<stdio.h>
int main(){
    int num,sum=0,temp;
    printf("\n enter a number");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        sum=sum+((num%10)*(num%10)*(num%10));
        num=num/10;
    }
    if(sum==temp)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}