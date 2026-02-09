//wap to compare two string using strcmp
#include<stdio.h>
#include<string.h>
int main(){
	char s1[10];
	char s2[10];
	printf("enter string1");
	gets(s1);
	printf("enter string2");
	gets(s2);
	if(strcmp(s1,s2)==0){
		printf("string are equal\n");
	}
		else{
		
			printf("string are not equal");
			return 0;
		}
	}

