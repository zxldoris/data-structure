#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct Student)
struct Student{
	int num;
	float score;
	struct Student *next;
}; 
int n=0;
struct Student *Creat()
{
	struct Student *p1, *p2, *head;
	head = NULL;
	p1 = p2 = (struct Student *)malloc(LEN);
	scanf("%d %f", &p1->num, &p1->score);
	while(p1->num != 0)
	{
		n = n+1;
		if(n==1) head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct Student *)malloc(LEN);
		scanf("%d %f",&p1->num, &p1->score);
	}
	p2->next= NULL;
	return head;
}
void print(struct Student *head)
{
	struct Student *p;
	p = head;
	while(p->num != 0)
	{
		printf("%d %.f\n",p->num, p->score);
		p=p->next;
	}
}
int main()
{
	struct Student *p;
	p = Creat();
	print(p);
	return 0;
}
