#include <stdio.h>
int main() {
	int x, i;
	printf("\nInput an integer: ");
	scanf("%d", &x);
	printf("All the divisor of %d are: ", x);
	for(i = 1; i <= x; i++) {
		if((x%i) == 0){
			printf("\n%d", i);
			printf("\n");
		}
	}

	return 0;
}










/*3.Write a C program to find all the divisors of a given integer N using a for loop.
Sample Input:
5
6

Sample Output:
1,5
1,2,3,6*/
