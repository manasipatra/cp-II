#include<stdio.h>
#include<stdio.h>
int main (){
	char s[25];
	int i,count=0;
	printf("enter a string-");
	gets(s);
	for(i=0;s[i]!=0;i++){
		if(s[i]==32){
		
	   count++;
}
}
int wrds;
wrds=count+1;
printf("the total words in the sentence are -%d",wrds);
return 0;
}
