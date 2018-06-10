#include <stdio.h>
int main()
{
int i;
double bonus,b1,b2,b4,b6,b10;
int branch; 
b1=100000*0.1;
b2=b1+100000*0.075;
b4=b2+100000*0.05;
b6=b4+100000*0.03;
b10=b6+100000*0.015;
printf("请输入利润i：");
scanf("%d",&i);
branch=i/100000;
if(branch>10)   
branch=10;
switch(branch)
{
case 0:bonus=i*0.1;break;
case 1:bonus=b1+(i-100000)*0.075;break;
case 2:
case 3:bonus=b2+(i-200000)*0.05;break;
case 4:
case 5:bonus=b4+(i-400000)*0.03;break;
case 6:
case 7:
case 8:
case 9:bonus=b6+(i-600000)*0.015;break;
case 10:bonus=b10+(i-1000000)*0.01;
}
printf("应发奖金数%10.2f",bonus);
return 0;
}

