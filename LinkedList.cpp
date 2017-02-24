#include<stdio.h>
struct Student{
	int num;
	float score;
	struct Student *next;
};
int main()
{
	struct Student a,b,c,*head,*p;
	a.num=10010; a.score=89.0;
	b.num=10011; b.score=99.0;
	c.num=10012; c.score=88.1;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do{
		printf("%d, %.1f \n",p->num, p->score);
		p = p->next;
		}while(p!=NULL);
	return 0;
	
}
