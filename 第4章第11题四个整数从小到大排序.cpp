#include <stdio.h>
int main()
{
int i,j,t;
int a[4];
printf("������4��������\n");
for(i=0;i<4;i++)
scanf("%d",&a[i]); 
printf("\n");
for(j=0;j<3;j++)
for(i=0;3-j;i++)
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("�ĸ�������С����Ϊ��\n");
for(i=0;i<3;i++) 
printf("%d",a[i]);
printf("\n");
return 0;
 } 
