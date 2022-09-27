//10. Uma matriz M pode ser transposta em uma matriz N onde o número
 //de linhas/colunas da primeira passa a
//ser o número de colunas/linhas da segunda. Faça um programa que leia
// uma matriz 4x3, gere sua transposta
//e apresente a matriz resultante.

#include <stdio.h>
#include "matrixlib.h"

int main(){
    int m=3,n=4;
	int mat[100][100];
	int matTransposta[100][100];
	geraMatrix(mat,n,m);
	printMatrix(mat,n,m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		matTransposta[j][i]=mat[i][j];	
		}
	}
	printf("\n");
	printMatrix(matTransposta, m,n);
	}
		

