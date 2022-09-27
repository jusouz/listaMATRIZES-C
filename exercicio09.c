//9. Calcular a soma de 2 matrizes. *Verifique antes se elas são 
//de mesma ordem.
#include <stdio.h>
#include "matrixlib.h"
int main(){
	int i,j;
	int soma [100][100];
	int a[100][100],b[100][100];
	int cA,lA,cB,lB;
	scanf ("%d%d%d%d",&cA,&lB,&cB,&lA);
	geraMatrix(a,lA,cA);
	geraMatrix(b,lB,cB);
	printMatrix(a,lA,cA);
	printMatrix(b,lB,cB);
	if(cA==cB && lA==lB){
		for (i=0;i<lA;i++){
			for(j=0;j<cA;j++){
				soma[i][j]=a[i][j]+b[i][j];
			}
		}
		printMatrix(soma ,lA,cA);
	}

	
}
