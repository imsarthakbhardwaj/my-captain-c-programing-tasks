#include<stdio.h>

main()
{
char name[10],rev[10];
int a;	
printf("           checking whether a program is palindrome or not                ");
printf("\n##########################################################################");	
printf("\nenter the string you want to check whether it is palindrome or not : ");
gets(name);
strcpy(rev,name);
strrev(rev);
a=strcmp(rev,name);

	if(a==0)	
	{
	
	printf("it is palindrome");
}
else
	{
		printf("it is not palindrome");
	}

	
}
