//programa: Desce_minHeap
//programadora: sandy barros
//diálogo: este programa recebe uma sequência
//e a ordena usando heapsort
#include<stdio.h>

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int esquerdo(int i){
	return 2*(i+1)-1;
}

int direito(int i){
	return 2*(i+1);
}

void desce(int n, int S[100], int i){
	int e, d, menor;

	e = esquerdo(i);
	d = direito(i);

	if(e<n && S[e] < S[i])
		menor = e;
	else
		menor = i;
	if(d<n && S[d] < S[menor])
		menor = d;
	if(menor != i){
		troca(&S[i], &S[menor]);
		desce(n, S, menor);
	}
}
void constroi_max_heap(int n, int S[100]){
	int i;
	for(i= n/2 - 1; i>=0; i--)
		desce(n,S,i);
}

int main(void){
	int n, S[100];

	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &S[i]);

	constroi_max_heap(n, S);

	for(int i=0; i<n; i++)
		printf("%d ", S[i]);
	printf("\n");

	return 0;
}