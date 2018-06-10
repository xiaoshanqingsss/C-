#include <stdio.h>
int main()
{
int x,Y;
printf("ÇëÊäÈëx£º");
scanf("%d",&x);
if(x>=10)
{
Y=3*x-11; 
printf("x=%d,Y=%d\n",x,Y);
}
else
if(x>=1)
{
Y=2*x-1;
printf("x=%d,Y=%d\n",x,Y);
}
else
{
Y=x;
printf("x=%d,Y=%d\n",x,Y);
}
return 0;
}

