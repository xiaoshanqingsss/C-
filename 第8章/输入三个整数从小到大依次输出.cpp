#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,*p3,*p;
	printf("请输入3个数字以逗号隔开\n");
	scanf("%d,%d,%d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	if(*p1>*p2){p=p1;p1=p2;p2=p;}
	if(*p1>*p3){p=p1;p1=p3;p3=p;}
	if(*p2>*p3){p=p2;p2=p3;p3=p;}
	printf("由小到大排列是\n");
	printf("%d,%d,%d",*p1,*p2,*p3);
	return 0;
}
