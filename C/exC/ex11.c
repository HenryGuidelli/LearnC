#include <stdio.h>

void main(){
    
    int D, d, A;

	printf("Valor da diagonal maior: ");
	scanf("%d", &D);

	printf("Valor da diagonal menor: ");
        scanf("%d", &d);

	A = (D * d)/2;
	//P = (l*2) + (h*2);

	printf("\nArea = %d\n", A);

}
