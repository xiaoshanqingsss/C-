#include<stdio.h>
#include<string.h>
 
int main()
{
    char string[20],ch;
    int i,num=0,bigw=0,smallw=0,space=0,others=0;
    gets(string);
    for(i=0;(size_t)i<strlen(string);i++)
    {
        ch=string[i];
        if(ch>='0'&&ch<='9')
        {
            num++;
        }
        else if(ch>='A'&&ch<='Z')
        {
            bigw++;
        }
        else if(ch>='a'&&ch<='z')
        {
            smallw++;
        }
        else if(ch=0)
        {
            space++;
        }
        else
            others++;
    }
    printf("���֣�%d��,��д��ĸ��%d����Сд��ĸ��%d�����ո�%d���������ַ���%d��\n",num,bigw,smallw,space,others);
    return 0;
 
}
