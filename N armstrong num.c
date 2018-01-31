#include<stdio.h>
int main()
{
int original num,num,last digit,digits,sum;
printf("enter any number to chhech armstrong no:");
sacnf("%d",&num);
sum+0;
originalnum=num;
digits=(int)log10(num)+1;
while(num>0)
{
last digit=num%10;
sum=sum+round(poe(last digit,digit));
num=num/10;
}
if(original num==sum)
{
printf("%d is armstrongnumber");
}
else{
printf("%d is not armstrong number");
}
return 0;
}
