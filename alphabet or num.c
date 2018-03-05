#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int i,n,count=0,countt=0,count1=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z'));
	    {
	       count=1;
	    }
	    else if((a[i]>=0)&&(a[i]>=9))
	    {
	        countt=1;
	    }
	    else
	    {
	        count1=1;
	    }
	}
	if((count==1)&(countt==1))
	{
	    printf("yes..string contains both alphabets and numbers");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
