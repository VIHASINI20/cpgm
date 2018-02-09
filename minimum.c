#include <stdio.h>
 
int main()
{
int a[20],i,n,smallest;
printf("Enter the number:");
scanf("%d",&n);
printf("the elements in array is:",a[i]);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
smallest=a[0];
for(i=1;i<n;i++)
{
    if(a[i]<smallest)
    {
    smallest=a[i];
}
 
}
printf("smallest no in array is :%d",smallest);
 
 
 
 
    return 0;
}
