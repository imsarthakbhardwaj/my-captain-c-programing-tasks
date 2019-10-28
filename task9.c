#include<stdio.h>

main()
{
int no,i,fact,a[10];
long int b=1;
printf("enter the no for which you have to find factorial : ");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
b=b*i;	
}

printf("factorial of no is%ld",b);	

}
