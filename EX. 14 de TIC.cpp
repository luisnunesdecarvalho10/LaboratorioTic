#include<stdio.h>
#include<stdlib.h>
int main(){
	int Percpares,Percimpares;
	int quantpares=0,quantimpares=0;
	for(int num=0 ;num<10; num++){
	printf("%d",&num);
	if(num%2==0){
	quantpares++;}
	else if( num%2!=0){
	quantimpares++;}
	Percpares = (quantpares/10)*100;
	printf("percentagem dos numeros pares e = %f \n", Percpares);
	Percimpares = (quantimpares/10)*100;
	printf("percentagem dos numeros impares e = %f \n", Percimpares);
}
}


