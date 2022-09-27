//7. Matriz Identidade é uma matriz quadrada (mesmo número de linhas e
// colunas) onde todos os elementos da
//diagonal principal é 1 e os demais elementos da matriz é 0. Gere 
//uma matriz identidade de ordem N e
//apresente a mesma na tela, onde N deve ser informado pelo usuário.

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int i,j;
	int mat[100][100],ordem;
	printf("ordem da matriz");
	scanf("%d",&ordem);
	geraMatrix(mat,ordem,ordem);
	printf("diagonal principal\n");
	for(i=0;i<ordem;i++){
	for (j=0;j<ordem;j++){
		mat[i][j]=0;
	}
    }
	for(i=0;i<ordem;i++){
		mat[i][i]=1;
	}
	printMatrix(mat,ordem,ordem);
	return 0;
}
