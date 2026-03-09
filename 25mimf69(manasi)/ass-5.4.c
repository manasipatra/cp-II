//wap to demonstrate pointer arithmetic with a double array.show how to iterate through the array using via pointer
#include<stdio.h>
int main(){
	double a[]={1,2,3,4};
	double *p=a;
	printf("%lf\n",*(p++));
	printf("%lf\n",*(p++));
}
