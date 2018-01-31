#include<stdio.h>
3include<math.h>
void main()
{
int number,sum=0,rem=0,cube=0,temp;
printf("enter a number");
scanf("%d",&numer);
temp=number;
while(number!=0)
{
rem=number%10;
cube=pow(rem,3);
sum=sum+cube;
number=number/10;
}
if(sum==temp)
printf("the given number is armstrong no");
else
printf("the given no is noy armstrong no");
}
