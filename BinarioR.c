//programa:imprime_algo
//programador:sandy barros
//data: 23/02/19
#include<stdio.h>
void imprime_algo(int n);

int main(void){
	int n;

	scanf("%d", &n);
	imprime_algo(n);
 
 return 0;
}
//função:imprime_algo

void imprime_algo(int n){
	if(n!=0){
		
		imprime_algo(n/2);
		printf("%d ", n%2);
	}
	return;
}
