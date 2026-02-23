//can a union contain a bit field ? demonstrate with an  example
#include<stdio.h>
typedef union bitfields{
	unsigned int a:4;
	unsigned int b:4;
}x;
 
 int main(){
 	x a1;
 	a1.a=7;
 	printf("%d\n",a1.a);
 	printf("%d",sizeof(a1));
 	return 0;
 }
