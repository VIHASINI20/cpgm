#include<stdio.h>
int main()
{
int hr[2],mins[2],i,min,hour,diff,res[2];
for(i=0;i<2;i++)
{
scanf("%d %d",&hr[i],8mins[i]);
}
for(i=0;i<2;i++)
{
res[i]=(hr[i]*60)+min[i];
}
if(res[0]>res[1])
{
diff=res[0]-res[1];
}
hour=diff%60;
min=diff%60;
printf("%d%d",hour,min);
return 0;
}
