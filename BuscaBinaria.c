//programa: Busca_Binária
//programadora: sandy barros
#include<stdio.h>
//declaração das funções
int Busca_Binaria(int, int, int[]);
//inicio da função principal
int main(void){
	int k, v[100], result, tam;

	scanf("%d", &k);
	scanf("%d", &tam);
//leia o vetor
	for(int i=0; i<tam; i++)
		scanf("%d", &v[i]);
//chame a função
	result = Busca_Binaria(k, tam, v);
	printf("%d\n", result);

	return 0;
}
//função: busca binária
int Busca_Binaria(int k, int tam, int v[100]){
	int esq, dir, meio;
	
	esq = -1;
	dir = tam;
	
	while (esq < dir - 1) {
		meio = (esq + dir) / 2;
		if (v[meio] < k)
			esq = meio;
		else
			dir = meio;
	}
	if(v[dir]==k)
		return dir;
	else
		return -1;

}
