#include <stdio.h>
#include <math.h>
#define ROLO 50

int main(){
	int rl,mt,ma;
		
	printf("Digite a quantidade de rolo: ");
	scanf("%d", &mt);

	rl = mt / ROLO;
	ma = mt % ROLO;
		
	printf("rolos: %d\n", rl); 
	printf("Metros avulso: %d\n", ma);
	
	printf("voce precisa de %d rolos e %d metros avulsos", rl, ma);
	
	return 0;
}
