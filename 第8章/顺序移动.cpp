#include "stdio.h"
int main()
{
	int i,n,a[10],m;
	void move(int a[],int n,int m);
	printf("����һ��������n:\n");
   scanf("%d",&n);
	printf("������%d��������\n",n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   printf("�����ƶ���λ����\n");
   scanf("%d",&m);
   move(a,n,m);
   printf("�ƶ������Ϊ��\n");
   for(i=0;i<n;i++)
   printf(" %d ",a[i]);
   printf("\n");
    
}
	void move(int a[],int n,int m)
{
	int b[10];
	int i;
	for(i=0;i+m<n;i++){
		b[i+m]=a[i];
	}
	for(i=0;i<m;i++){
		b[i]=a[n-m+i];
	}
	for(i=0;i<n;i++)
	a[i]=b[i];	
}
