//13-Elabore um programa que multiplique duas Matrizes M (2x3) e N (3x2)
// fornecidas pelo usu�rio. O programa deve:
//- Ler as matrizes M e N.
//- Calcular a multiplica��o e armazenar na matriz Mult.
//- Apresentar o resultado.
//Observe que a multiplica��o somente pode ser efetuada se o n�mero de
 //colunas da 1a matriz � igual ao n�mero
//de linhas da 2a. Outra caracter�stica importante que deve ser 
//analisada � que a matriz produto possui o mesmo
//n�mero de linhas da 1a e o mesmo n�mero de colunas da 2a.

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
