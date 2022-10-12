#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double area, r, r2;
	printf("Digite o numero do raio: ");
	scanf("%lf", &r);
	
	r2=r*r;
	area=3.14*r2;
	
	printf("A área é: %lf", area);
	
}
