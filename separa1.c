//programa:separa1.c
//programadora: Sandy Barros
//Diálogo: Este programa lê um vetor e separa
//os valores negativos e nulos à direita.
#include<stdio.h>
void troca();
void separa();

int main(void){
	int n, v[100];

	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &v[i]);
	separa(0, n-1, v);
	
	for (int i=0; i<n; i++)
		printf("%d ", v[i]);

	return 0;
		
}
//função: separa
void separa(int p, int r, int v[100]){
	int x, i, j;
	x=0;
	i=p-1;
	j=r+1;

	while(1){
		do{
			j--;
		}while(v[j]>x);

		do{
			i++;
		}while(v[i]<=x);
		
		if(i<j)
			troca(&v[i], &v[j]);
		else
			return;
	}
}
//função: troca
void troca(int *a, int *b){
	int aux;
	aux= *a;
	*a=*b;
	*b=aux;	
}
