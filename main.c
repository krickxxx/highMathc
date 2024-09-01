#include <stdio.h>
#include "matrix.h"
#include "calculus.h"
#include "statistics.h"

int main() {
    // Example usage of matrix operations
    double a[2][2] = {{1, 2}, {3, 4}};
    double b[2][2] = {{5, 6}, {7, 8}};
    double result[2][2];

    matrix_add(a, b, result);
    printf("Matrix Addition Result:\n");
    print_matrix(result);

    // Example usage of calculus
    double x = 2.0;
    printf("Derivative of x^2 at x=%.2f: %.2f\n", x, derivative_square(x));

    // Example usage of statistics
    double data[] = {1, 2, 3, 4, 5};
    printf("Mean: %.2f\n", mean(data, 5));

    return 0;
}
