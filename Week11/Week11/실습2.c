#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int num1 = 45510, num2 = 2023;
	printf("Before swap:\nnum1 = %d\nnum2 = %d\n", num1, num2);
	swap(&num1, &num2);
	printf("\nAfter swap:\n");
	printf("num1 value : %d\n", num1);
	printf("num2 value : %d\n", num2);
}