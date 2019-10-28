#include<stdio.h>

main()
{
int a,temp,con;
printf("type 1 for converting celsius to far\ntype 2 for converting far to celcius :");
scanf("%d",&a);
	printf("enter the temperature: ");	
    scanf("%d",&temp);
	
switch(a)
{
	case 1:
		con=32+(temp*9/5);
		printf("%d",con);
		break;
	case 2:
		con=(temp-32)*5/9;	
		printf("%d",con);
		break;
		default:
		printf("wrong choice");  	
				}				
	
	
}
