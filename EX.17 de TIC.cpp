#include <stdio.h>
main(){
	int i,num,Fat=1;
	
	
	printf("Digite um Numero");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
	Fat=Fat*i;
	printf("Fatorial = %d \n",Fat);
}
}
