/*LAB EXERCISE 1: Prime Number Check
• Write a C program that checks whether a given number is a prime number or not using a for
loop.
• Challenge: Modify the program to print all prime numbers between 1 and a given number.*/
#include<stdio.h>
main(){
	int i,num,flag=0;
	printf("\n enter the number");
	scanf("%d",&num);
	for(i=1;i<num/2;i++){
		if(num%i==0){
		flag=1;
	}
}
	 (flag==0)?printf("%d id prime number",num):printf("%d id prime number",num);
	}
	
