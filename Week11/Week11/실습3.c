#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void apply_discount(int* price, int n, int percent) {

	for (int i = 0; i < n; i++) {
		price[i] = price[i] * (100 - percent) / 100;
	}
}
void print_prices(int* price, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", price[i]);
	}
	printf("\n");
}
int main(void) {
	int percent;
	int price[5] = {12000, 8500, 3000, 45000, 990};
	int n = 5;

	printf("할인율(%%)을 입력하시오 : ");
	scanf("%d", &percent);

	printf("할인 전 : ");
	print_prices(price, n);

	apply_discount(price, n, percent);

	printf("할인 후 : ");
	print_prices(price, n);
}