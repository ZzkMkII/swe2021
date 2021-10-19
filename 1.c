#include <stdio.h>
int main() {
	int price;
	printf("Please input price:\n");
	scanf("%d", &price);
	price = price * 1.08;
	printf("The total price is %d yen (reduced tax rate)\n", price);
}
