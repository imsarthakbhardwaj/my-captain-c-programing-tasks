#include<stdio.h>

main()
{
char fname[10],lname[10],fullname[10];
printf("enter the first name :");
gets(fname);
printf("enter the second name :");
gets(lname);

strcat(fname,lname);
printf("combined name is : %s",fname);	
}
