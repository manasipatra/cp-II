//implement a function to compare two string using pointer.
#include<stdio.h>
int cmp(char *a,char *b){
int i;
for(i=0;*(a+i)!=NULL||*(b+i)!=NULL;i++){
	if(*(a+i)-*(b+i)==0){
		continue;
	}
	else{
		return*(a+i)-*(b+i);
	     }
	}
}
int main(){
	char a[4]="abc";
	char b[4]="def";
	if (cmp(&a,&b)){
	printf("strings are not equal");
}
else{

  	printf("strings are equal");
}
	return 0;
}
