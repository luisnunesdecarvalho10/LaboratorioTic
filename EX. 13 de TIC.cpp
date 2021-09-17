#include<stdio.h>
int main(){
int soma=0;
for(int num;num<=500;num++){
if(num%2!=0){
if(num%3==0){
soma+=num;
printf("soma =%d \n", soma);
}
}
}
}
