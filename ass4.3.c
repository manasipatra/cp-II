//wap that use an enumstration to implement a menu-driven application
#include<stdio.h>
    enum menu{add,sub,mult,div};
    int main(){
    	printf("0-to add\n");
    	printf("1-to sub\n");
    	printf("2-to mult\n");
    	printf("3-to div\n");
    	enum menu select;
    	printf("the operation is\n");
    	select=div;
    	printf("%d",select);
    	return 0;
    }
