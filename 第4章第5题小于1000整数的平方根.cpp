#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
int n,r;
printf("������һ��С��%d������n��",M) ;
scanf("%d",&n);
if(n>M)
{
printf("��������ݲ�����Ҫ������������һ��С��%d��������",M); 
scanf("%d",&n);
}
r=sqrt(n);
printf("%d��ƽ��������������Ϊ%d",n,r);
return 0;
}

