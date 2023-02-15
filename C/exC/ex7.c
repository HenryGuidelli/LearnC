#include <stdio.h>

void main(){

	int L, A, P;

	printf("Valor do lado do quadadrado: ");
	scanf("%d", &L);

	A = L * L;
	P = L * 4;

	printf("\nPerimetro = %d\nArea = %d\n\n", P, A);

}
