// Write a C program to print the given triangle number pattern using 0, 1.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    printf("Please enter a number: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 && j != i){
                printf("1 ");
            } else if (j == i){
                printf("1\n");
            } else {
                printf("0 ");
            }
        }
    }
    return EXIT_SUCCESS;
}