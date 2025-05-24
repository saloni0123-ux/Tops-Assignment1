/*LAB EXERCISE 2: Factorial Calculation
• Write a C program that calculates the factorial of a given number using a function.
• Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers.*/
#include <stdio.h>
#include <time.h>
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a non-negative integer (<=20 recommended): ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    unsigned long long result_recursive = factorial_recursive(number);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Recursive Factorial of %d is %llu\n", number, result_recursive);
    printf("Time taken (recursive): %f seconds\n", cpu_time_used);

    start = clock();
    unsigned long long result_iterative = factorial_iterative(number);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Iterative Factorial of %d is %llu\n", number, result_iterative);
    printf("Time taken (iterative): %f seconds\n", cpu_time_used);

    return 0;
}
