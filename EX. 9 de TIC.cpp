	#include <stdio.h>
	#include <stdlib.h>
	int main (){
	float PesoSaco, QuantForn;
	printf("Peso do saco: ");
	scanf ("%d",&PesoSaco);
	printf("quantidade de ra��o fornecida: ");
	scanf ("%d",&QuantForn);
	QuantForn *= 10;
	PesoSaco -= QuantForn * 0,001;
	printf("Depois de 5 dias o saco ter� %d Kg",PesoSaco);
	return 0;
}
