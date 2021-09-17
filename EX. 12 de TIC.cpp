#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int Numero;
setlocale(LC_ALL,"portuguese");
	system ("color 0A");
	printf("Digite um Número de 5 Digitos: ");
	scanf("%d", &Numero);
	system("cls");
	if(Numero > 10000 && Numero < 99999)
		int prim = (Numero/10000) %10;
		int segun = (Numero/1000)%10;
		int penul = (Numero/10)%10;
		int ultim = (Numero/1)%10;
		
		if (prim == ultim && segun == penul)
	printf("é Palindromo");
	else
	printf("Não é Palindromo");
}
}
