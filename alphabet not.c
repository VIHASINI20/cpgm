#include<Lstdio.h>
int main()
{
char c;
printf("Enter a charater:");
sacnf("%c,&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("%c is an alphabet.",c);
else
printf("% c is not an alphabet.",c);
retun 0;
}
