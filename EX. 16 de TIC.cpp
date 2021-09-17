	#include <stdio.h>
	#include <stdlib.h>
	int main (){
	int Altura[15],Maior=0,Menor;
	for(int i=0;i<=15;i++){
	printf("digite uma Altura");
	scanf ("%d",&Altura[i]);
	for(int i=0;i<=15;i++){
	printf("%d",Altura[i+1]);
	if(Maior==Altura[i])
	Maior = Altura[i];
	printf("a maior Altura e=",Altura[i]);
	if(Menor<Altura[i])
	Menor = Altura[i];
	printf("a menor Altura e=",Altura[i]); 
	return 0;
}
}
}

