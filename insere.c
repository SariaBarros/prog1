//programa:Insere.c
//programadora:Sandy
//Dialógo: Este programa lê um vetor ordenado e um número k 
//e insere o número k na posição correta do vetor
#include<stdio.h>

void insere(int, int, int[], int []);

int main(void){
	int k, tam, v[100], u[100];

	scanf("%d", &k);
	scanf("%d", &tam);
//leia o vetor
	for(int i=0; i<tam; i++)
		scanf("%d", &v[i]);
//copie o vetor v no vetor u
	for(int i=0; i<tam; i++)
		u[i]=v[i];
//chame a função
	insere(k, tam, v, u);
//imprima o vetor com o numero k
	for(int i=0; i<tam+1; i++)
		printf("%d ", u[i]);

return 0;						
}
void insere(int k, int tam, int v[100], int u[100]){
	int ind=0, i=0, j=1;
	while(j==1){
		if(k<v[i]){
			ind=i;
			j=0;
		}
		i++;
	}	
	u[ind]=k;
	for(int l=ind+1; l<tam+1; l++)
		u[l]=v[l-1];	
}