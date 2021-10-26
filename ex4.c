#include <stdio.h>

int main(void) {
	int m, n;
    printf("TAMANHO DA MATRIZ\n");
    printf("Quantidade de LINHAS: ");
	scanf("%d", &m);
    printf("Quantidade de COLUNAS: ");
	scanf("%d", &n);
	
	int matriz[m][n];

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Digite o [%d][%d] elemento: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}