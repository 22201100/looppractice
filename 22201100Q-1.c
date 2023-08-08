#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            if ((i / 2)% 2 != 0) {  // Check if the number is every second odd number
                sum +=i;
            }
        }
    }

    printf("Sum of every second odd number from 1 to %d is: %d\n", N, sum);

    return 0;
}






/*1. Write a C program to find the sum of every second odd number from 1 to N using a for
loop.
Sample Input:
12
Sample Output:
21*/

