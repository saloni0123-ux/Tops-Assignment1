/*8. Functions in C
LAB EXERCISE:
o Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.*/

#include<stdio.h>
int factfind(int num){
    int f;
    if(num==1){
        return 1;
    }
    f = num*factfind(num-1);
    return f;
}
main(){
    printf("\n factorical of %d = %d",5, factfind(5));
}

/*
output of 5 = 120
*/