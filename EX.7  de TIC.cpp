#include <stdio.h>
 int main(){
	float PFabrica,PLDistribuidor, PImposto;
	float lucrodistr, Valdoimposto, Precofinal;
	printf("Digite Preco da fabrica \n");
	scanf ("%f",&PFabrica);
	printf("Percentual de lucro do distribuidor: ");
	scanf ("%f",&PLDistribuidor);
	printf("Percentual de impostos: ");
	scanf ("%f",&PImposto);
	lucrodistr = (PFabrica * PLDistribuidor)/100;
	printf("Lucro do distribuidor= %d \n",lucrodistr);
	Valdoimposto = (PFabrica * PImposto)/100;
	printf("Valor dos Impostos= %d \n", Valdoimposto);
	Precofinal= PFabrica+(PFabrica * PLDistribuidor)/100 + (PFabrica * PImposto)/100;
	printf("Preço Final do Veiculo = %d\n", Precofinal);
	return 0;
}
