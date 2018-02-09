#include <stdio.h>
int main(void)
{
	int a[10],b,i,j,temp;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d ",a[i]);
	}
	return 0;
}
Compilation error	#stdin co
