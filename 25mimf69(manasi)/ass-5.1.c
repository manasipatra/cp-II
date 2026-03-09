//wap to creat a pointer to an integer variable and demonstrate how the pointer can modify the value of the variable.
int main(){
	int a=10;
	int *ip=&a;
	printf("%d\n",a);
	*ip=6;
	printf("%d\n",a);
	return 0;
}
