#include <stdio.h>
int r, c;
int main()
{
r=1;
while (r!=0)
{
printf ("> ");
scanf ("%d", &c);
switch (c)
{
case 1:
break;
case 0:
r= 0;break;
default:
break;
}
}
}