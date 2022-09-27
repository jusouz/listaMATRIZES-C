//Escrever um programa C que gere uma matriz de N Linhas x M Colunas e 
//apresente sua diagonal principal.
//Dica, limite sua matriz a uma ordem 100.

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int i,j;
	int mat[100][100],ordem;
	printf("ordem da matriz :");
	scanf("%d",&ordem);
	geraMatrix(mat,ordem,ordem);
	printf("***MATRIZ***\n");
	printMatrix(mat,ordem,ordem);
	printf("diagonal principal\n");
	for(i=0;i<ordem;i++){
		printf("%d |",mat[i][i]);
	}
	printf("\n");
	printf("diagonal secundaria\n");
	j=ordem-1; 
	for(i=0;i<ordem;i++){
		printf("%d |",mat[i][j]);
		j--;
	}
	return 0;
}
