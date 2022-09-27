//Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros.
// Após isso indique qual é o menor e
//valor da matriz.

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int i,j;
	int mat[100][100],lin,cols,res;
	printf("qtde de lin e cols :");
	scanf("%d%d",&lin,&cols);
	geraMatrix(mat,lin,cols);
	printf("***MATRIZ***\n");
	printMatrix(mat,lin,cols);
	res=menorMatrix(mat,lin,cols);
	printf("menor valor da matriz: %d\n",res);
	return 0;
}
