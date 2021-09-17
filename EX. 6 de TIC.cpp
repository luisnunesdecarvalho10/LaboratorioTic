#include<stdio.h>
int main(){
	int custodoespetaculo, precodoconvite,convitesvendidos,quantdeconvites;
	printf("digite o custo do espetaculo \n");
	scanf("%d", &custodoespetaculo);
	printf("digite o preço do convite \n");
	scanf("%d", &precodoconvite);
	printf("numero de convites vendidos \n");
	scanf("%d", &convitesvendidos);
	quantdeconvites = precodoconvite * convitesvendidos;
	printf("a quantidade de convites vendidos e= %d \n", quantdeconvites);
	if(quantdeconvites >= custodoespetaculo){
	printf("o numero desejado foi alcancado");}
	else if(quantdeconvites < custodoespetaculo){
	printf("o numero desejado nao foi alcansado");
}
}
