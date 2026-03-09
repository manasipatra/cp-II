//explain how you can use a pointer to access and print elements of an integer array
int main(){
	int a[3]={10,20,30};
	int *pr=&a;
	printf("%d\n",*pr);
	printf("%d\n",*(pr=1));
	printf("%d\n",*(pr-1));
	return 0;	
}
