#include<stdio.h> 
main() 
{ 
int a[100]; 
int i,n,p=0,q; 
printf("请输入人数:"); 
scanf("%d",&n); 
q=n; 
for(i=0;i<n;i++) a[i]=i+1; 
for(i=0;;i++) 
 { 
 if(i==n) i=0;
 if(a[i]!=0) p++; 
 else continue; 
 if(p%3==0)
  {a[i]=0;q--;} 
 if(q==1) break; 
 } 
for(i=0;i<n;i++) 
if(a[i]!=0) 
printf("最后留下的人原来的号为: %d\n\n",a[i]); 
}
