// #include<stdio.h>
// int main()
// {
//     printf("heelo world");
//     return 0;
    
// }
#include <stdio.h>
#include <conio.h>
int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Calculator\n");
        printf("2. Area of Circle\n");
        printf("3. Simple Interest\n");
        printf("4. Fibonacci Series\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            double num1, num2;
            char op;
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            if (op == '+') {
                printf("Result: %.2lf\n", num1 + num2);
            } else if (op == '-') {
                printf("Result: %.2lf\n", num1 - num2);
            } else if (op == '*') {
                printf("Result: %.2lf\n", num1 * num2);
            } else if (op == '/') {
                if (num2 != 0) {
                    printf("Result: %.2lf\n", num1 / num2);
                } else {
                    printf("Error: Division by zero.\n");
                }
            } else {
                printf("Invalid operator.\n");
            }
        } else if (choice == 2) {
            // Area of Circle
            double radius;
            printf("Enter radius: ");
            scanf("%lf", &radius);
            printf("Area of Circle: %.2lf\n", 3.14 * radius * radius);
        } else if (choice == 3) {
            // Simple Interest
            double principal, rate, time;
            printf("Enter principal: ");
            scanf("%lf", &principal);
            printf("Enter rate: ");
            scanf("%lf", &rate);
            printf("Enter time: ");
            scanf("%lf", &time);
            printf("Simple Interest: %.2lf\n", (principal * rate * time) / 100);
        } else if (choice == 4) {
            // Fibonacci Series
            int n, t1 = 0, t2 = 1, val1;
            printf("Enter number of terms: ");
            scanf("%d", &n);
            printf("Fibonacci Series: %d, %d", t1, t2);
            for (int i = 3; i <= n; i++) {
                val1 = t1 + t2;
                printf(", %d", val1);
                t1 = t2;
                t2 = val1;
            }
            printf("\n");
        } else if (choice != 5) {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    printf("Exiting the program.\n");
    return 0;
}