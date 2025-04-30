#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 7; i++) { 
        
        for (j = 0; j < 7; j++) {
            if (i == 0 || i == 3 || i == 6) {
                printf("*");
            } else if (i < 3 && j == 0) {
                printf("*");
            } else if (i > 3 && j == 6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        for (j = 0; j < 7; j++) {
            if ((j == 0 && i != 6) || (j == 6 && i != 6)) {
                printf("*");
            } else if (i == 6 && j > 0 && j < 6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        for (j = 0; j < 7; j++) {
            if (j == 0 || (j == 6 && (i != 0 && i != 3 && i != 6))) {
                printf("*");
            } else if ((i == 0 || i == 3 || i == 6) && j < 6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        for (j = 0; j < 7; j++) {
            if ((i == 0 || i == 6) && (j > 0 && j < 6)) {
                printf("*");
            } else if ((j == 0 || j == 6) && (i > 0 && i < 6)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        for (j = 0; j < 7; j++) {
            if (j == 0 || (j == 6 && (i != 0 && i != 6))) {
                printf("*");
            } else if ((i == 0 || i == 6) && j < 6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");

        for (j = 0; j < 7; j++) {
            if (j == 0 || j == 6 || i == 3) {
                if (i == 3 && (j == 0 || j == 6)) {
                    continue; 
                }
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        }
}

