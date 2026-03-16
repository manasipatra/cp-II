//create a program where a pointer to a pointer(e.g., **p) is used to access and modify a variable of a type short//
#include<stdio.h>
int main()
{
	int num=10;
	int *p;
	int **q;
	p=&num;
	q=&p;
	printf("original value:%d\n",num);
	**q=25;
	printf("modified value:%d\n",num);
	return 0;
}
