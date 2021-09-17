#include<stdio.h>
int main(){
	float salario,percentagem,aumento,novosalario;
	printf("digite o salario \n");
	scanf("%f",&salario);
	printf("digite a percentagem \n");
	scanf("%f",&percentagem);
	aumento = (salario * percentagem)/100;
	printf("o aumento e = %f \n",aumento);
	novosalario = salario + aumento;
	printf("o novo salario é = %f \n",novosalario);
}
