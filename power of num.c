#include<stdio.h>
int main()
{
int base, exponent;
long long result=1;
printf("Enter a base number:");
scanf("%d",&base);
printf("Enter an exponent:");
scanf("5d",&exponent);
while(exponent !=0)
{
result*=base;
--exponent;
}
printf("Answer=%ll",result);
return o;
}
