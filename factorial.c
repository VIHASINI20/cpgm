#inclucde<stdio.h>
int main()
{
int n,i;
unsigned long lomng factorial=1;
printf("enter an integer:");
scanf("%d",&n);
if(n<=0)
printf("error factorial of a negative number does't exist:");
else
{
for(i=1,i<=n,i++i)
{
factorial*=i;
}
printf("factorial of%d=%llu",n factorial);
}
return 0;
}
