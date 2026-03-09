int main()
{
	int ar[]={1,2,3,4};
	int *p=ar;
	int i;
	for(i=0;i<4;i++)
	*(p+i)=(*p+i) *10;
	for(i=0;i<4;i++)
	printf("%d\n",*p+i);
}
