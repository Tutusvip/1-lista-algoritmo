#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_brazil");
	char nome[100];
	char sexo;
	int matricula, nHorasTrabalhadas;
	float valorPorHora, salario;
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	printf("Digite a matricula: ");
	scanf("%d", &matricula);
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%d", &nHorasTrabalhadas);
	printf("Digite o valor por hora: ");
	scanf("%f", &valorPorHora);
	
	salario=nHorasTrabalhadas*valorPorHora;
	
	printf("Funcionario: %s\n", nome);
	printf("Numero de matricula: %d\n", matricula);
	printf("Numero de horas trabalhadas: %d\n", nHorasTrabalhadas);
	printf("Valor por hora trabalhada: %f\n", valorPorHora);
	printf("--------------------------------\n");
	printf("O salario total é: %f", salario);
	
}
