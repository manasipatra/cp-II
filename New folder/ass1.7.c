//a program to count occurrences of specific character in a string
#include<stdio.h>
#include<string.h>
int main(){

	char s[30];
	char ch;
	int i,count=0;
	printf("enter a string:");
	gets(s);
	printf("enter the character you want to count");
	scanf("%c",&ch);
	for(i=0;s[i]!='\0';i++){
	if(s[i]==ch){
		count++;
		
	
	if(s[i]==ch){
		count++;
		
	}
	
}
}
printf("the no. of  character are %d",count);
return 0;
}
