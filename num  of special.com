#include<stdio.h>
#include<string.h>
int main()
{
char a[1000];
int n,i,count=0;
scanf("%s",0);
n=strlen(a);
for(i=o;i<n;i++)
{
if(a[i]>='0'&&a[i]<='a')
{
count++;
}
else
{
continue;
}
}
printf("%",count);
return 0;
}
