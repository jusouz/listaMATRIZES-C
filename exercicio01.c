//Receba ou gere uma matriz N por M e conte quantos números
// maiores que X existem na matriz. X deve ser
//informado pelo usuário.

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], lin,cols,busca,cont=0;
	int i,j;
	printf("Qtde de lin e cols:");
	scanf("%d%d",&lin,&cols);
	carregaMatrix(mat,lin,cols);
	printf("*** Matriz ***\n");
	printMatrix(mat,lin,cols);
	printf("Valor para verificacao:");
	scanf("%d",&busca);
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j]>busca)
				cont++;
	printf("%d valores maiores que %d\n",cont,busca);			
	return 0;
}
