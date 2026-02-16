//wap to define a structure for a student containing fields for name,roll number ,and marks. input and display the esults
#include<stdio.h>
typedef struct student{
	char name[10];
	int rollno;
	int marks;	
}stud;
int main()
{
struct student s={"smita",25,90};
printf("name-%s\nrollno-%d\nmarks-%d\n",s.name,s.rollno,s.marks);
return 0;
}
