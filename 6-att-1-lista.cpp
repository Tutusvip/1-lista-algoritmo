#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	float media,soma, n1, n2;system("color B0");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a primeira nota: ");
	scanf("%f", &n2);
	
	soma=n1+n2;
	media=soma/2;
	
	printf("A soma ?: %2.f", soma);
	printf("\nA media ?: %2.f", media);
	
}
