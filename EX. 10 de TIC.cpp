	#include<stdio.h>
	#include <stdlib.h>
	int main (){
	float SM, QK, Valor_a_pagar,Desconto=0;
	printf("Digite o Salario Minimo: ");
	scanf ("%f",&SM);
	printf("Digite a Quantidade de quilowatts: ");
	scanf ("%f",&QK);
	printf("Cada kilowatts custa: $ %f",SM / 5);
	Valor_a_pagar = (QK*SM) /5 ;
	printf("essa residencia vai pagr: $ %d\n",Valor_a_pagar);
	Desconto = (Valor_a_pagar*15)/100;
	printf("Com desconto de 15 por cento:  $ %d\n",Desconto);
	return 0;
	}
