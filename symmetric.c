// Write a C program to read elements in a matrix and check whether the given matrix is symmetric matrix or not.
#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_OF_DIMENSIONS 10

int main() {
    int a = 0, b = 0, x = 0;
    int array[MAX_NUM_OF_DIMENSIONS][MAX_NUM_OF_DIMENSIONS];
    printf("Please enter the number of rows, max 10: ");
    scanf("%d", &a);
    printf("Please enter the number of columns, max 10: ");
    scanf("%d", &b);
    if (a != b){
        printf("This matrix cannot be symmetric due to uneven number of rows and columns.\n");
        return EXIT_FAILURE;
    } else {
        printf("Please enter the elements of the matrix:\n");
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                scanf("%d", &array[i][j]);
            }        
        }
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                if (array[i][j] != array[j][i]){
                    x++;
                    break;
                }
            }        
        }
        if (x != 0){
            printf("This matrix is not symmetric.\n");
        } else {
            printf("This matrix is symmetric.\n");
        }
        return EXIT_SUCCESS;
    }
}