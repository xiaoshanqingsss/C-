#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
int n,r;
printf("请输入一个小于%d的整数n：",M) ;
scanf("%d",&n);
if(n>M)
{
printf("输入的数据不符合要求，请重新输入一个小于%d的整数：",M); 
scanf("%d",&n);
}
r=sqrt(n);
printf("%d的平方根的整数部分为%d",n,r);
return 0;
}

