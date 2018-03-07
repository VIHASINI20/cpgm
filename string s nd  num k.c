#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,num;
	scanf("%s",(a));
	scanf("%d",&num);
	n=strlen(a);
    for(i=0;i<num;i++)
    {
        printf("%c",a[i]);
    }
	return 0;
}
