#include<stdio.h>
int main()
{
int n,reversed Integer=0,remainder,original Integer;
printf("Enter a integer:");
sacnf("%d",&n);
original Integer=n;
while(n!=0)
{
remainder=n%10;
reversed Integer=reversal Integer*10+remainder;
n/=10;
if(original Integer== reversed Integer)
printf("%d is a palindrome.",original Integer);
else
printf("%d is not a palindro,e.",original Integer);
return 0;
}
