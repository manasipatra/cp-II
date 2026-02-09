//wap to replace spaces in a string with hyphens
#include<stdio.h>
#include<string.h>
int main(){
	char s[30];
	int i;
	printf("enter the sentence:");
	gets(s);
	while(s[i]!='\0'){
		if(s[i]==32)
		{
			s[i]='-';
			
		}
		i++;
		
	}
	puts(s);
	
}
