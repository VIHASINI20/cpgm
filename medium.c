#include <stdio.h>
int main(void) {
 int n,a[100],i,sum=0,b=0;
 scanf("%d",&n);
 if(n>0)
 {
 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	i=sum/n;
	printf("%d",i);
}
else
return b;

	return
