#include <stdio.h>
#include "matrixlib.h"
int main (){
	int i,j,escalar;
	int m,n;
	int matriz [100][100];
    scanf ("%d%d%d",&m,&n,&escalar);
    geraMatrix(matriz,n,m);
    printMatrix(matriz,n,m);
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		matriz[i][j]*=escalar;
    	
	}	
	}
	printMatrix(matriz,n,m);
}
