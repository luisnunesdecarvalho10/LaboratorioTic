	#include <stdio.h>
	#include <stdlib.h>
	int main (){
	float SalMin, Salario, ValorHT, SalarioBruto; 
	int HoraTrab, imposto;
	printf("Salário mínimo: ");
	scanf ("%f",&SalMin);
	printf("Horas trabalhadas: ");
	scanf ("%d",&HoraTrab);
	ValorHT = SalMin/2;
	printf("o valor de hora trabalhadas e = %f",ValorHT);
	SalarioBruto = HoraTrab * ValorHT;
	printf("o Salario Bruto e = %f \n" , SalarioBruto);
	imposto = (SalarioBruto * 0,3);
	printf("o imposto a pagar e = %d \n", imposto);
	Salario = SalarioBruto - imposto;
	printf("Salario a receber: %d \n",Salario);
	return 0;
}
