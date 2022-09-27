#include <stdio.h>
#include "matrixlib.h"
int preencherRetangulo(int mat[][100],int posXI,int posXF,int posYI,int
 posYF){
 	int i,j;
 	for(i=posXI;i<=posXF;i++){
 		for(j=posYI;j<=posYF;j++){
 			mat[i][j]=1;
		 }
 		
	 }
 }
int main (){
 int i,j;
 int mat[100][100];
 for(i=0;i<100;i++){
 	for (j=0;j<100;j++){
 		mat[i][j]=0;
	 }
 }	
int n;
int posicaoXI,posicaoXF;
int posicaoYI,posicaoYF;
 scanf(" %d",&n);
 for(i=0;i<n;i++){
 	scanf("%d%d%d%d",&posicaoXI,&posicaoXF,&posicaoYI,&posicaoYF);
 	preencherRetangulo(mat,posicaoXI,posicaoXF,posicaoYI,posicaoYF);
 }
 int cont=0;
 for(i=0;i<100;i++){
 	for (j=0;j<100;j++){
 		if(mat[i][j]==1)cont++;
	 }
 }	
 printf("%d",cont);	
}
