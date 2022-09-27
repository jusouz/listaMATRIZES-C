//12. Faça um programa que leia ou gere duas matrizes N X M de mesma ordem
// com valores reais. Ofereça ao usuário
//um menu de opções: (a) somar as duas matrizes (b) subtrair a primeira 
//matriz da segunda (c) adicionar uma
//constante as duas matrizes (d) imprimir as matrizes
//Nas duas primeiras opções uma terceira matriz deve ser criada. 
//Na terceira opção o valor da constante deve ser
//lido e o resultado da adição da constante deve ser armazenado 
//na própria matriz
#include <stdio.h>
#include "matrixlib.h"

int main(){
	char op='\0';
	int i,j;
	int m,n;
	int mat1[100][100];
	int mat2[100][100];
	scanf("%d%d",&n,&m);
	geraMatrix(mat1,n,m);
	printMatrix(mat1,n,m);
	geraMatrix(mat2,n,m);
	printMatrix(mat2,n,m);
	while(op!='e'){
	scanf(" %c",&op);
	if(op=='a'){
		int soma [100][100];
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
			soma[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		printMatrix(soma ,n,m);
	}
	else if(op=='b'){
		int sub [100][100];
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
			sub[i][j]=mat2[i][j]-mat1[i][j];
			}
		}
		printMatrix(sub ,n,m);
	}
	else if(op=='c'){
		int constante ;
		scanf ("%d",&constante);
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
			mat1[i][j]+=constante;
			mat2[i][j]+=constante;
			}
		}
		printMatrix(mat1,n,m);
		printMatrix(mat2,n,m);
	}
	else if (op=='d'){
	printMatrix(mat1,n,m);
		printMatrix(mat2,n,m);	
	}
	}
}
