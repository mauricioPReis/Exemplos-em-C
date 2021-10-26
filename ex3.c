#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v1[2], v2[2], v3[3];
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1[0]);
	printf("Digite o segundo valor: ");
	scanf("%d", &v1[1]);
	printf("Digite o terceiro valor: ");
	scanf("%d", &v2[0]);
	printf("Digite o quarto valor: ");
	scanf("%d", &v2[1]);
	printf("Digite o quinta valor: ");
	scanf("%d", &v3[0]);
	printf("Digite o sexto valor: ");
	scanf("%d", &v3[1]);
	
	printf("\nTHE MATRIX");
	printf("\n%d ", v1[0]);
	printf("%d\n", v1[1]);
	printf("%d ", v2[0]);
	printf("%d\n", v2[1]);
	printf("%d ", v3[0]);
	printf("%d\n", v3[1]);
}

