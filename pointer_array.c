#include<stdio.h>
int main()
{
	int a[3] = {1,2,3},i;
	int *p;
	p = &a[0];
	for(i=0;i<3;i++,p++)
		printf("%d ",*p);
	printf("\n");
	for(i=0;i<3;i++)
	printf("%d ",*(a+i));
	return 0;
 } 
