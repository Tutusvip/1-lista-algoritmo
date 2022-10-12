#include <stdio.h>
#include <math.h>

int main(){
	int n1,n2,rt,nt;
	
	printf("Digite o numero 1: ");
	scanf("%d", &n1);
	printf("Digite o numero 2: ");
	scanf("%d", &n2);
	
	rt = n1 % n2;
	nt = n1 / n2;
	
	printf("Resto: %d\n", rt);
	printf("Divisao: %d", nt);	
	
}
