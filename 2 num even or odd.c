#include <stdio.h>
int main() 
{
    int n,m,diff=0;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        diff=n-m;
    }
    else
    {
        diff=m-n;
    }
    if(diff%==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
	return 0;
