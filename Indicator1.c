#include<stdio.h>
swap(int *n1,int *n2)
{
	int *t;
    t=*n1;
	*n1=*n2;
	*n2=t;
	printf("Swap A = %d\n",*n1);
	printf("Swap B = %d\n",*n2);
}
void main()
{
	int a,b;
	printf("Origanal A = ");
	scanf("%d",&a);
	printf("Origanal B = ");
	scanf("%d",&b);
	
	swap(&a,&b);
}
