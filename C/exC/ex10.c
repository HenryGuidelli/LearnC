#include <stdio.h>

void main(){
    
    int B, b, h, A;

	printf("Valor da base maior: ");
	scanf("%d", &B);

	printf("Valor da base menor: ");
        scanf("%d", &b);

	printf("Valor da altura: ");
        scanf("%d", &h);

	A = (B + b) * h /2;

	printf("\nArea = %d\n", A);

}
