//creat a program to find the length of a string using strlen
#include<stdio.h>
#include<string.h>
int main(){
	char s1[10];
	char s2[10];
	printf("enter string1");
	gets(s1);
	printf("length of string %d",strlen(s1));
	return 0;
	
}
