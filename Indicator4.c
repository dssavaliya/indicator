#include<stdio.h>
main()
{
	char str[100],*len;
	
	printf("Enter String: ");
	gets(str);
//	puts(str);
//	printf("%s",strlen(str));
	
	len = str;
	int count=0;
	while(*len != '\0')
	{
		count++;
		len++;
	}
	printf("The Length of the String = %d",count);
	
}
