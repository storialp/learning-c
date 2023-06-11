#include <stdio.h>

// Did not like the new line curly brace format

int main() {
    int iterations;
    printf("Enter the number of iterations you want: ");
    scanf("%d", &iterations);
    for (int i = 1; i <= iterations; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            printf("fizz \n");
        } else if (i % 5 == 0 && i % 3 != 0) {
            printf("buzz \n");
        } else if (i % 5 == 0 && i % 3 == 0) {
            printf("fizzbuzz \n");
        } else {
            printf("%d \n", i);
        }
    }
    return 0;
}