//Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros.
 //Após isso indique qual é o maior e
//valor da matriz.

#include <stdio.h>
#include "matrixlib.h"

int maiorMatrix(int mat[][100],int lin,int cols){
	int i,j;
	int maior= mat[0][0];
	for(i=0;i<lin;i++){
		for(j=0;j<cols;j++){
			if(mat[i][j]>maior){
			maior=mat[i][j];	
			
			
			}
		}
	}
	return maior;
}
int main(){
	int i,j;
	int mat[100][100],lin,cols,res;
	printf("qtde de lin e cols :");
	scanf("%d%d",&lin,&cols);
	geraMatrix(mat,lin,cols);
	printf("***MATRIZ***\n");
	printMatrix(mat,lin,cols);
	res=maiorMatrix(mat,lin,cols);
	printf("maior valor da matriz: %d\n",res);
	return 0;
}
