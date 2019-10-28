#include<stdio.h>

main()
{
int a,b,c;
printf("enter the digit for which you have to print table : ");
scanf("%d",&a);
for(b=0;b<11;b++)
printf("%d*%d=%d\n",a,b,a*b);
}
