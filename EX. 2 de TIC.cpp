#include<stdio.h>
int main(){
	int salminimo,salfuncionario, quantsalminimo=0;
	printf("digite o salario de um funcionario \n");
	scanf("%d",&salfuncionario);
	printf("digite o salario minimo \n");
	scanf("%d",&salminimo);
	quantsalminimo = (salfuncionario - salminimo)/100;
	printf("a quantidade de salario e = \n %d", quantsalminimo);
}
