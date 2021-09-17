#include<stdio.h>
int main(){
float Salario,Aumento,NovoSalario;
printf("digite o salario \n");
scanf("%f", &Salario);
Aumento = (Salario * 25)/100;
printf("o aumento e de %f \n",Aumento);
NovoSalario = Salario + Aumento;
printf("o novo salario e %f ", NovoSalario);
return 0;
}

