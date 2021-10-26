#include <stdio.h>
#include <stdlib.h>

int comparacao (int n1, int n2, int n3){
	if ((n1 > n2) && (n1 > n3)){
		printf("\nO maior e: %d", n1);
	}
	else if ((n2 > n1) && (n2 > n3)){
		printf("\nO maior e: %d", n2);
	}
	else if ((n1 == n2) && (n2 == n3)){
		printf("\nOs numeros sao iguais");
	}
	else {
		printf("\nO maior e: %d", n3);
	}
}

int main(int argc, char *argv[]) {
	int a, b, c, maior;
	printf("MAIOR NUMERO\n");
	printf("\nDigite os dois valores para comparacao.");
	printf("\nPrimeiro numero: ");
	scanf("%d", &a);
	printf("Segundo numero: ");
	scanf("%d", &b);
	printf("Terceiro numero: ");
	scanf("%d", &c);
	
	maior = comparacao (a, b, c);

}
