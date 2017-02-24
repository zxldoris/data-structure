#include<stdio.h>
int main()
{
	struct student
	{
		int num;
		char name[10];
		char sex;		
	}a={100,"Man",'M'};
	printf("%d, %s, %c",a.num, a.name, a.sex);
	return 0; 
 } 
