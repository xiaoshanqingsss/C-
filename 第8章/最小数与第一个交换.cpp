
#include<stdio.h>
void input(int a[10])
{
	int i;
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void exchange(int a[10])
{
	int i,min,max,temp,big,small;
	min = max = a[0];
	for (i=0;i<10;i++)
	{
		if (max<a[i])
		{
			max = a[i];
			big=i;
		}
		if (min>a[i])
		{
			min = a[i];
			small = i;
		}
	}
	temp=a[0];
	a[0]=a[small];
	a[small]=temp;
	temp=a[9];
	a[9]=a[big];
	a[big]=temp;
}
 
void output(int a[10])
{
	int i;
	for (i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[10];
	input(a);
	exchange(a);
	output(a);
	return 0;	
}
