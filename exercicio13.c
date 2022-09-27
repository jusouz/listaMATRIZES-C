//13-Elabore um programa que multiplique duas Matrizes M (2x3) e N (3x2)
// fornecidas pelo usuário. O programa deve:
//- Ler as matrizes M e N.
//- Calcular a multiplicação e armazenar na matriz Mult.
//- Apresentar o resultado.
//Observe que a multiplicação somente pode ser efetuada se o número de
 //colunas da 1a matriz é igual ao número
//de linhas da 2a. Outra característica importante que deve ser 
//analisada é que a matriz produto possui o mesmo
//número de linhas da 1a e o mesmo número de colunas da 2a.

#include <stdio.h>
#include "matrixlib.h"

int main (){

	int i,u,l;
	int matM[100][100];
	int matN[100][100];
	int matMult[100][100];
	leiaMatrix(matM, 2, 3);
	printMatrix(matM, 2, 3);
	leiaMatrix(matN,3,2);
	printMatrix(matN,3,2);
	for(u=0;u<2;u++){
		for(l=0;l<2;l++){
			int soma=0;
			for(i=0;i<3;i++){
				soma+=matM[u][i]*matN[i][l];	
			}
			matMult[u][l]=soma;		
		}
	}
	printMatrix(matMult,2,2);
	
}
