//programa: datas.c
//programadora: sandy
//diálogo: este programa lê uma sequência de datas e 
//as ordena usando o heapsort
#include<stdio.h>
typedef struct{
	int dia;
	int mes;
	int ano;	
} data;

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int pai(int i){
	if(i==0)
		return 0;
	else
		return (i-1)/2;
}

int esquerdo(int i){
	return 2*(i+1)-1;
}

int direito(int i){
	return 2*(i+1);
}

void desce(int n, data *S[100], int i){
	int e, d, maior;

	e = esquerdo(i);
	d = direito(i);
	if(e<n && *S[e]> S[i])
		maior = e;
	else
		maior=i;
	if(d<n && *S[d]>S[maior])
		maior=d;
	if(maior != i){
		troca(&S[i], &S[maior]);
		desce(n, &S, maior);
	}
}
void constroi_max_heap(int n, data *S[100]){
	int i;
	for(i= n/2 - 1; i>=0; i--)
		desce(n, &S,i);
}
void heapsort(int n, data *S[100]){
	int i;

	constroi_max_heap(n, &S);
	for(i=n-1; i>0; i--){
		troca(&S[0], &S[i]);
		n--;
		desce(n, &S, 0);
	}
}

int main(void){
	int n;
	data *datas[100];

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d/%d/%d", &(*datas[i]).dia, &(*datas[i]).mes, &(*datas[i]).ano);
	}

	heapsort(n, &datas);

	for(int i=0; i<n; i++){
		printf("%d/%d/%d", (*datas[i]).dia, (*datas[i]).mes, (*datas[i]).ano);
		printf("\n");
	}
	return 0;
}