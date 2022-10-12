#include <stdio.h>
#include <stdlib.h>

int main(){
	int h,m,s;
	printf("Digite a HR: ");
	scanf("%d", &h);
	
	m = h*60;
	s = h*3600;
	
	printf("menutos:%d\n e segundos:%d", m,s);
	
	return 0;
}
