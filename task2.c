#include<stdio.h>

main()
{
float cel,far;
printf("enter temperature in celsius : ");
scanf("%f",&cel);
far=(cel*1.8)+32.0;
printf("the value of temp in fahrenheit is : %.2f",far);	
}
