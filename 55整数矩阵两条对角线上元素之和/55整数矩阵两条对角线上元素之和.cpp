#include "stdio.h"
const int N=5;
int sum_matrix(int a[N][N])
{int sum=0,i,j;
for(i=0;i<N;i++)
for(j=0;j<N;j++)
{if(i==j)
sum+=a[i][j];
if(i+j==N-1)
sum+=a[i][j];
}
sum-=a[N/2][N/2];
return sum;
}
int main()
{
int a[N][N],i,j;
for(i=0;i<N;i++)
for(j=0;j<N;j++)
scanf("%d",&a[i][j]);
printf("%d\n",sum_matrix(a));
}
