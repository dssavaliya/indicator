#include<stdio.h>
main()
{
	int a[100],n,i;
	int *p;
	p = &a;
	printf("Enter value of N : ");
	scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("Element in Array Are : ");
		for(i=0;i<n;i++)
	{
	    printf("%d ",*p+i);
	}
	
	printf("\nRevers Array : ");
    int *rev;
    rev=&a[n-1];
    	for(i=0;i<n;i++)
	{
	    printf("%d ",*rev--);
	}
/*  	for(i=0;i<n/2;i++)
	{
		int firstval=a[i];
		int secondval=a[n-i-1];
		a[i]=secondval;
		a[n-i-1]=firstval;
		printf("%d ",a[i]);
	}
*/
	
}
