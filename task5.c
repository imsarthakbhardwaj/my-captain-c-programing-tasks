#include<stdio.h>

main()
{
int array[10],i,j;
printf("enter 5 numbers to reverse them :\n ");
for(i=0;i<5;i++){
scanf("%d",&array[i]);	
}
for(i=4;i>=0;i--)
{
	printf("\n^%d",array[i]);
}
}



