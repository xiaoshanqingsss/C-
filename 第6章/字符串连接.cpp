#include <stdio.h>
int main()
{char s1[80],s2[40];
int i=0,j=0;
printf("�������һ���ַ�����");
scanf("%s",s1);
printf("������ڶ����ַ�����");
scanf("%s",s2); 
while(s1[i]!='\0')
i++;
while(s2[j]!='\0')
s1[i++]=s2[i++];
s1[i]='\0';
printf("\n���������µ��ַ�����%s\n",s1);
return 0;
}
