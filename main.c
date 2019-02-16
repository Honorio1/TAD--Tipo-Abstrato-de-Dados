#include <stdio.h>
#include <stdlib.h>
#include "cubo.c"

int main(){
	float area, volume;
	
	Cubo* c1;
	c1 = cubo_cria(2.0);
	
	area = cubo_area(c1);
	printf("A area do cubo eh: %f\n", area);

	volume = cubo_volume(c1);
	printf("O volume do cubo eh: %f\n", volume);
	
	return 0;
}
