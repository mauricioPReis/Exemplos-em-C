#include <stdio.h>
#include <stdlib.h>

int comparacao (int n1, int n2){
	if (n1 > n2){
		printf("\nO maior e: %d", n1);
	}
	else if (n1 == n2){
		printf("\nOs numeros sao iguais");
	}
	else {
		printf("\nO maior e: %d", n2);
	}
}

int main(int argc, char *argv[]) {
	int a, b, maior;
	printf("MAIOR NUMERO\n");
	printf("\nDigite os dois valores para comparacao.");
	printf("\nPrimeiro numero: ");
	scanf("%d", &a);
	printf("Segundo numero: ");
	scanf("%d", &b);
	
	maior = comparacao (a, b);

}
