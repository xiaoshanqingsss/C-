#include <stdio.h>
#include <math.h>
int main()
{
int n,n1,n2,n3,n4,n5,place;
printf("������һ������(0-99999):");
scanf("%d",&n);
if(n>9999)
place=5;
else if(n>999)
place=4;
else if(n>99)
place=3;
else if(n>9)
place=2;
else 
place=1;
printf("λ��:%d\n",place);
n5=n/10000;
n4=(int)(n-n5*10000)/1000;
n3=(int)(n-n5*10000-n4*1000)/100;
n2=(int)(n-n5*10000-n4*1000-n3*100)/10;
n1=(int)(n-n5*10000-n4*1000-n3*100-n2*10);
printf("ÿλ����Ϊ����λ:%d\tʮλ:%d\t��λ:%d\tǧλ:%d\t��λ:%d\n",n1,n2,n3,n4,n5);
printf("%d�ķ������Ϊ��",n); 
while(n!=0)
{
printf("%d",n%10);
n=n/10;
}
return 0;
}
