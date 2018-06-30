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
    printf("数字：%d个,大写字母：%d个，小写字母：%d个，空格：%d个，其他字符：%d个\n",num,bigw,smallw,space,others);
    return 0;
 
}
