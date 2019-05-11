//programa: somaprod.c
//programadora: sandy
//este programa lê um conjunto e calcula
//a sua soma e produto depois vê quais elementos
//do conjunto são maiores que a soma e o produto.
#include<stdio.h>
#define MAX 100

void somaprod(int a, int b, int *soma, int *prod);
void maior(int n, int v[MAX],int base);

int main(void){
	int *p, v[MAX], n,
		soma=0, prod=1;


	scanf("%d", &n);
	for(p=v; p < v+n; p++)
		scanf("%d", p);
	for(int i=0; i<n-1; i=i+2){
		somaprod(v[i], v[i+1], &soma, &prod);
	}
	maior(n, v, soma);
	maior(n, v, prod);

	return 0;
}

void somaprod(int a, int b, int *soma, int *prod){
	*soma = *soma + a + b;
	*prod = (*prod) * a * b;
}
void maior(int n, int v[MAX], int base){
	int cont=0, *p;

	for(p=v; p < v+n; p++){
		if(*p > base)
			cont++;
	}
	printf("%d ", cont);
}

