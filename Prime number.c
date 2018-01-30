#include<stdio.h>
int main()
{
int low,high,i flag;
Printf("enter two number(interval):")
Scanf("%d%d",&low,&high);
Printf("prime number between%dand%d are.",low,high);
While(low<high)
{
Flag=0;
For(i=2;i<=low/2;++i)
{
If(low%i==0)
{
Flag=1;
Break;
}
}
If(flag==0)
Printf("%d",low);
++Low;
}
Return 0;
}
