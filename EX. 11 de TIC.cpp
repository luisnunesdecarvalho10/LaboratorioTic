	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <math.h>
	int main(){
	float Delta,Raiz;
	int a,b,c,x1,x2;
	printf("digite valor de A");
	scanf("%d",&a);
	printf("digite valor de B");
	scanf("%d",&b);
	printf("digite valor de C");
	scanf("%d",&c);
	Delta=(b*b)-4*a*c;
	if(Delta<0)
	printf("ERRO!!");
	else if(Delta>=0)
	printf("Delta =, %f \n",Delta);
	Raiz = sqrt (Delta);
	printf("Raiz=, %f \n",Raiz);
	x1=(-b+Raiz)/2*a;
	printf("x2= %f \n",x1);
	x2=(-b+Raiz)/2*a;
	printf("x2 = %f \n",x2);
	system("PAUSE");
	}

