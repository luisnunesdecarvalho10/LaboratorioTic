#include<stdio.h>
main(){
int fib,n1=0,n2=1;
for(int i=0;i<20;i++)
{
fib=n1+n2;
n1=n2;
n2=fib;
printf("fibonacci= %d \n",fib);
}
}
