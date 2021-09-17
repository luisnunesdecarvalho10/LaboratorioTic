#include<stdio.h>
int main(){
float AnodeNascimento, AnoActual, Idade, Idadeem2050;
printf("Digite o ano de nascimento \n");
scanf("%f",&AnodeNascimento);
printf("Digite o ano actual \n");
scanf("%f",&AnoActual);
Idade = AnoActual - AnodeNascimento;
printf("a idade da pessoal e %f \n",Idade);
Idadeem2050 = 2050 - AnodeNascimento;
printf("a idade em 2050 sera %f \n",Idadeem2050);
return 0;
}
