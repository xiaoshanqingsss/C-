#include <stdio.h>
#include <string.h>
int main()
{
    char buf[3][100];
    char *p[3] = {buf[0],buf[1], buf[2]};
    int i,j;
     
    for(i = 0; i < 3; i ++)
        scanf("%s", p[i]);
    for(i = 0; i < 2; i ++)
        for(j = i+1; j < 3; j ++)
        {
            if(strcmp(p[i], p[j]) > 0)
            {
                char * t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
     for(i = 0; i < 3; i ++)
        printf("%s\n", p[i]);
}
