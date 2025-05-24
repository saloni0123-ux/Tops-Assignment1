/*LAB EXERCISE 2: Matrix Addition
• Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
• Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/
#include <stdio.h>
 main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("Enter elements of 2x2 Matrix 1:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of 2x2 Matrix 2:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &matrix2[i][j]);

    // Add matrices
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

}
