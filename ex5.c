#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matriz[3][2];
	
	printf("DECLARACAO DE VALORES\n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++){
			printf("Digite os valores: ");
			scanf("%d", &matriz[i][j]);
		}		
	}
	
	printf("\nTHE MATRIX\n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++){
			printf(" %d ", 2 * matriz[i][j]);
		}		
		printf("\n");
	}
	
}
