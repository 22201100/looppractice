#include <stdio.h>

int main() {
    int N;

    // Input the value of N
    printf("Enter a value for N: ");
    scanf("%d", &N);

    // Print the header for the output
    printf("Square and cube of numbers from 1 to %d:\n", N);

    for (int i = 1; i <= N; i++) {
        int square = i * i;
        int cube = i * i * i;

        // Print the square and cube of the current number
        printf("Square and cube of %d : %d %d\n", i, square, cube);
    }

    return 0;
}






/*2. Write a C program to print squares and cubes of all numbers from 1 to N using a for
loop and the output should be shown following the pattern below:
Sample Input:
4
Sample Output:
Square and cube of 1 : 1 1
Square and cube of 2 : 4 8
Square and cube of 3 : 9 27
Square and cube of 4 : 16 64*/
