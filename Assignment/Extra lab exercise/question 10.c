/*LAB EXERCISE 3: Sum of Array Elements
• Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
• Challenge: Modify the program to also find the average of the numbers.*/
#include <stdio.h>
main() {
    int N;
    float sum = 0, average;

    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    float numbers[N];  

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i]; 
    }

    average = sum / N;

    printf("\nSum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", average);
}

