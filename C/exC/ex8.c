#include <stdio.h>

void main(){
    
    int l, h, A, P;

	printf("Valor da largura: ");
	scanf("%d", &l);

	printf("Valor da altura: ");
        scanf("%d", &h);

	A = l * h;
	P = (l*2) + (h*2);

	printf("\nPerimetro = %d\nArea = %d\n", A, P);

}
