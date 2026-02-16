//wap to define a structure for a complex number(real and imaginary parts)and write a function to perform addition of two complex numbers
#include<stdio.h>
typedef struct complex
{
	float r;
	float i;
}complex;
void add(complex c1,complex c2)
{
	complex c3;
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	printf("%.1f+i%.1f",c3.r,c3.i);
}
int main()
{
	complex c1,c2;
	printf("enter the first complex number");
	scanf("%f%f",&c1.r,&c1.i);
	printf("enter the second complex number");
	scanf("%f%f",&c2.r,&c2.i);
	add(c1,c2);
	return 0;
}
