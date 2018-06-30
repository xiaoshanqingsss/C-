#include <stdio.h>
#define N 15
int main()
{int i,number,top,bott,mid,loca,a[N],flag=1,sign;
char c;
printf("请输入数据:\n");
scanf("%d",&a[0]);
i=1;
while(i<N)
{scanf("%d",&a[i]);
if(a[i]>=a[i-1])
i++;
else
printf("请重新输入此数:\n");
}
printf("\n");
for(i=0;i<N;i++)
printf("%5d",a[i]);
printf("\n");
while(flag)
{printf("请输入要查找的数值:");
scanf("%d",&number);
sign=0;
top=0;
bott=N-1;
if((number<a[0])||(number>a[N-1]))
loca=-1;
while((!sign)&&(top<=bott))
{mid=(bott+top)/2;
if(number==a[mid])
{loca=mid;
printf("找到%d,它的位置在%d\n",number,loca+1);
sign=1; 
}
else if(number<a[mid])
bott=mid-1;
else
top=mid+1;
}
if(!sign||loca==-1)
printf("找不到%d\n",number);
printf("是否继续(Y/N)?");
scanf("%c",&c);
if(c=='N'||c=='n')
flag=0;
}
return 0;
}

