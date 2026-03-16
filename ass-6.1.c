//wap to input an array of integer and print them using pointers
#include<stdio.h>
int main()
{
	int arr[100];
	int n,i;
	int *p;
	printf("enter the number of element:");
	scanf("%d",&n);
	printf("enter %d integers=\n",n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
	p=arr;
	printf("the element of thr array are=\n");
	for(i=0;i<n;i++){
		printf("%d\n",*p);
		p++;
	}
	return 0;
}


