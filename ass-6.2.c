//implement a function to find the largest element in an array using pointers
#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *p;
	int i,max;
	p=arr;
	max=*p;
	for(i=0;i<5;i++){
		if(*(p+i)>max)
			max=*(p+i);
		
}
	printf("largest element=%d",max);
	return 0;
	
}
