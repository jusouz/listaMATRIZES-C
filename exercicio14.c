#include <stdio.h>
#include "matrixlib.h"

int main (){
	int i,j;
	int x=500,y=500;
	int mat[500][500];
	for (i=0;i<x;i++){
	for (j=0;j<y;j++){
		mat[i][j]=0;
	}	
	}
	 int caiu2vezes=0;
	 int n;
	 scanf(" %d",&n);
	 int posicaoX,posicaoY;
	for (i=0;i<n;i++){
	scanf(" %d %d",&posicaoX,&posicaoY);
		if(mat[posicaoX][posicaoY]==0)mat [posicaoX][posicaoY]=1;
		else {
		 caiu2vezes=1;
		 break;
	}
    }
    printf ("%d",caiu2vezes);
}
