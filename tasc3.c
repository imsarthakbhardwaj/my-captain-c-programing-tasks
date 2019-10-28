#include<stdio.h>

main()
{
int i,marks[5],sum=0;
float avg;
printf("enter the marks in three subjects : ");
for(i=0;i<3;i++){
scanf("%d",&marks[i]);
}
for(i=0;i<3;i++){

sum=sum+marks[i];
avg=sum/3;
}
printf("\nthe total of subjects : %d",sum);


printf("\naverage of no is %.2f",avg);

}
