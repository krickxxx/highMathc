#include <stdio.h>
#include "matrix.h"

void matrix_add(double a[2][2], double b[2][2], double result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void print_matrix(double matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}
