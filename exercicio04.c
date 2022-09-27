//Gere uma matriz de N Linhas x M Colunas. Solicitar um número ao usuário
// e passe para uma função que
//deve verificar quantas vezes este se encontra na matriz.

#include <stdio.h>
#include "matrixlib.h"
int main(){
	int matriz[100][100];
	int m,n,num;
	int cont=0;

	printf("entre com um valor :  ");
	scanf("%d%d%d",&n,&m,&num);
	geraMatrix(matriz,n,m );
	printMatrix(matriz,n,m );
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(matriz[i][j]==num){
			 cont++;
			}
		}
	}
	printf("numeros se encontra %d   vezes ",cont);
		
}
