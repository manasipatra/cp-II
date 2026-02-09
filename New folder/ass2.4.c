//wap to check if a string is a plindrome using strrev
#include<stdio.h>
#include<string.h>
int main(){
	char s1[20];
	char s2[20];
	printf("enter the string you want to check palindrome or not");
	gets(s1);
	strcpy(s1,s2);
	strrev(s1);
	if(strcmp(s1,s2)==0){
		printf("the string is palindrome");
	}
	else{
		printf("string is not a palindrome");
			}
			return 0;
}
