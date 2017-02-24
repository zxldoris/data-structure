#include<stdio.h>
int main()
{
	struct Student
	{
		int num;
		char name[10];
		char sex;
	};
	struct Student stu1;
	struct Student *p;
	p = &stu1;
	stu1.num = 10010;
	strcpy(stu1.name,"wang");
	stu1.sex = 'M';
	printf("%d, %s, %c",stu1.num, stu1.name, stu1.sex);
	printf("\n%d, %s, %c",(*p).num, (*p).name, (*p).sex);
	return 0;
}
