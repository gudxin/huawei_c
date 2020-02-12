//给定n个字符串，请对n个字符串按照字典序排列。
#include <stdio.h>
#include <string.h>

int main()
{
    int num,i=0,j,k;
    char str[1000][100],ch[100];

    scanf("%d\n", &num);
    while(i<num)
    {
        gets(str[i]);
        i++;
    }

    for (j = 0; j < num-1;j++)
    {
        for (k = 0; k < num - j - 1;k++)
        {
            if(strcmp(str[k],str[k+1])>0)
            {
                strcpy(ch, str[k]);
                strcpy(str[k], str[k + 1]);
                strcpy(str[k + 1], ch);
            }
        }
    }

    i = 0;
    while(i<num)
    {
        puts(str[i]);
        i++;
    }
        return 0;
}