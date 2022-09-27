//Desafio
#include <stdio.h>
#include "matrixlib.h"
int main(){
	int matriz[100][100];
	int ordem,determinante;
	int cont=0;
	printf("entre com um valor :  ");
	scanf("%d",&ordem);
	geraMatrix(matriz,ordem,ordem );
	printMatrix(matriz,ordem,ordem);
	if(ordem==2){
		int principal=0,secundaria=0;
		principal=matriz[0][0]*matriz[1][1];
		secundaria=matriz[0][1]*matriz[1][0];
		determinante=principal-secundaria;
	}
	else if (ordem==3){
		int principal=0,secundaria=0;
		principal=matriz[0][0]*matriz[1][1]*matriz[2][2]+
		matriz[0][1]*matriz[1][2]*matriz[2][0]+
		matriz[0][2]*matriz[1][0]*matriz[2][1];
			secundaria=matriz[0][1]*matriz[1][0]*matriz[2][2]+
		matriz[0][0]*matriz[1][2]*matriz[2][1]+
		matriz[0][2]*matriz[1][1]*matriz[2][0];
			determinante=principal-secundaria;
	}

	printf("determinante :%d ",determinante);
	
	
}


