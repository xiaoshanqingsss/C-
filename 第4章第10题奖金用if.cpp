#include <stdio.h>
int main()
{
int i;
double bonus,b1,b2,b4,b6,b10;
b1=100000*0.1;
b2=b1+100000*0.075;
b4=b2+100000*0.05;
b6=b4+100000*0.03;
b10=b6+100000*0.015;
printf("请输入利润i：");
scanf("%d",&i);
if(i<100000)
bonus=i*0.1;
else if(i<=200000)
bonus=b1+(i-100000)*0.075;
else if(i<=400000)
bonus=b2+(i-200000)*0.05;
else if(i<=600000)
bonus=b4+(i-400000)*0.03;
else if(i<=1000000)
bonus=b6+(i-600000)*0.015;
else 
bonus=b10+(i-1000000)*0.01;
printf("应发奖金数：%0.2f",bonus);
return 0;
}

