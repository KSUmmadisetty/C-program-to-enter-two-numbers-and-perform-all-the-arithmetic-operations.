#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, sum , difference, product, division;
	printf("Enter the 1st number:");
	scanf("%d", &a);
	printf("Enter the 2nd  number:");
	scanf("%d", &b);
	sum = a + b;
	difference = a - b;
	product = a*b;
	division = a/b;
	printf("sum of the given number = %d\n", sum);
	printf("difference of the given number = %d\n", difference);
	printf("product of the given number = %d\n", product);
	printf("division of the given number = %d\n", division);
	
	return 0;
}
