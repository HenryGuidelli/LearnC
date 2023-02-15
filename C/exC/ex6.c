#include <stdio.h>

void main(){

	int n1, n2, add, sub, mul, div;
	
	printf("Primeiro numero: ");
	scanf("%d", &n1);

	printf("Segundo numero: ");
        scanf("%d", &n2);

	add = n1 + n2;
	sub = n1 - n1;
	mul = n1 * n2;
	div = n1 / n2;

	printf("\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n", n1, n2, add, n1, n2, sub, n1, n2, mul, n1, n2, div);
}
