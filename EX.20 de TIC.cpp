#include<stdio.h>
main(){
int altura1=1,altura2=1,AnosNec,n;
printf("Digite os anos Necessarios \n");
scanf("%d",&AnosNec);
altura1=AnosNec * 0,02;
altura2=AnosNec * 0,03;
if(altura1>altura2){
printf("Anos insuficientes");
}
if(altura1 < altura2){
printf("Anos suficientes = %d",altura2);
}
}

