#include <stdio.h>

int main() {
    // 1D Array
    int arr1D[5];
    printf("Enter 5 integers for 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1D[i]);
    }

    printf("\nYou entered the 1D array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }

    // 2D Array (3x3 matrix)
    int matrix[3][3];
    int sum = 0;
    printf("\n\nEnter 9 integers for 3x3 matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the 3x3 matrix = %d\n", sum);

    return 0;
}
