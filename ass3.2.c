//how you can define a structure to store a date(day,month,year) and display it in the format(DD/MM/YYYY)?
#include<stdio.h>
typedef struct dt_frmt
{
	int date;
	int month;
	int year;
}dt;
int main()
{
	dt y={27,10,2005};
	printf("%d,%d,%d",y.date,y.month,y.year);
	return 0;
	
}
