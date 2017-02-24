#include<stdio.h>
struct student {
	int num;
	char name[10];
	char sex;
};
;int main()
{
	struct student stu[2] = {
		{10010, "zhang", 'F'},
		{10011, "wang", 'M'}
	};	
	struct student *p;
	int i;
	p = stu;
	for(i=0; i<2; i++, p++){
		printf("%d, %s, %c", p->num, p->name, p->sex);
		printf("\n");
	}
	return 0;
}
