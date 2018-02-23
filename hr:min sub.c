#include<stdio.h>
int main()
{
int hour1,hour2;
int min1,min2;
int a,result;
printf("\nenter the hour1: \tenter the min1:");
scanf("\n%d \t%d",&hour1,&min1);
printf("\nenter the hour2: \tenter the min2:");
scanf("\n%d \t%d",&hour2,&min2);
printf("\n%d \t%d",hour1,min1);
printf("\n%d \t%d",hour2,min2);
  a=hour1-hour2;
  result=min1-min2;
  printf("\nthe sub value is:%d %d",a,result);
return 0;
}
