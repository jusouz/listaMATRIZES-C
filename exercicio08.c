//8. Receba uma matriz como parâmetro em uma função e retorne 1 caso 
//ela seja uma matriz de bits ou 0 caso nao.

#include <stdio.h>
#include "matrixlib.h"
int matrizBit(int matriz[][100],int n,int m){
	int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
		if(matriz[i][j]!=1 && matriz[i][j]!=0){
			return 0;
		}	
		}
	}
	return 1;
}
int main (){
   int	matriz[100][100];
   int n,m;
   scanf("%d%d",&n,&m);
   leiaMatrix(matriz, n,m);
   if (matrizBit(matriz,n,m)==1)printf("matriz é bits :");
   else printf ("não é bits ");	
}
