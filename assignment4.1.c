//Demonstrate:how do you declare a bit-field to store a value that ranges from 0 to 15?
#include<stdio.h>
typedef struct bitfields{
	unsigned int a:4;
	unsigned int b:4;
	unsigned int c:4;
	
}x;
 
 int main(){
 	x a1;
 	a1.a=7;
 	printf("%d\n",a1.a);
 	a1.b=14;
 	printf("%d\n",a1.b);
 	a1.c=15;
 	printf("%d\n",a1.c);
 	return 0;
 }
