#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	char b[50];
	
	printf("enter string:-");
	scanf("%s",&a);
	
	strcpy(b,a);
	strrev(b);
	
	
	if (strcmp(b,a)==0)
	{
		printf("String is Palindrome");
	}else
	{
		printf("String is not Palindrome");
	}
}
