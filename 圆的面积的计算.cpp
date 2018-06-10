#include <stdio.h> 
#define Pi 3.1415926
int main()
{
float r,s;
printf("请输入圆的半径：r=");
scanf("%f",&r);
s=2*Pi*r;
printf("圆周率Pi=%.7f,圆的半径r=%.2f\n圆的面积s=%.7f",Pi,r,s);
return 0;
}
