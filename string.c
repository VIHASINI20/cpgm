#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int flag=0,i;
scanf("%s",a);
int n=strlen(a);
for(i=0:i<n;i++)
{
if(a[i]>='0'&&a[i]<='a')
{
flag=0;
}
else
{
flag=1;
printf("no");
break;
}
}
if(printf("yes");
}
return 0;
}
