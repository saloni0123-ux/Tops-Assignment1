/*5. Functions
LAB EXERCISE 1: Fibonacci Sequence
• Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
• Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/
#include <stdio.h>
#include <time.h>
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n) {
    if (n <= 1)
        return n;

    int prev = 0, curr = 1, next;
    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
void print_fibonacci_sequence(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("\nFibonacci sequence up to %d terms (recursive):\n", n);
    print_fibonacci_sequence(n);

    clock_t start, end;
    double time_recursive, time_iterative;

    start = clock();
    int fib_recur = fibonacci_recursive(n);
    end = clock();
    time_recursive = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    int fib_iter = fibonacci_iterative(n);
    end = clock();
    time_iterative = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n%d-th Fibonacci number (recursive): %d\n", n, fib_recur);
    printf("Time taken (recursive): %f seconds\n", time_recursive);

    printf("\n%d-th Fibonacci number (iterative): %d\n", n, fib_iter);
    printf("Time taken (iterative): %f seconds\n", time_iterative);

    return 0;
}
