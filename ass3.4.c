//creat a nested structure to store a student details (name,roll number and address where address is another structure)
#include<stdio.h>
typedef struct stud
{
	struct address
	{
		char state[30];
		char city[30];
		char dist[30];
		int pin;
	}add;
	char name[30];
	int rollno;
}std;
int main()
{
	std s1={"odisha","balasore","balasore",756043,"smriti",27};
	printf("state-%s\ncity-%s\ndist-%s\npin-%d\n",s1.add.state,s1.add.city,s1.add.dist,s1.add.pin);
	printf("name=%s\n,rollno=%d\n",s1.name,s1.rollno);
	return 0;
}
