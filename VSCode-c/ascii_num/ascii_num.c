#include<stdio.h>
#include<string.h>

char str[1000],newstr[1000];
int len,i,j,cnt=1;

int main()
{
        gets(str);
        len = strlen(str);

        newstr[0] = str[0];

        for (i = 1; i < len;i++)
        {
                for (j = 0; j <= i - 1;j++)
                {
                        if(newstr[j] == str[i])
                        {
                                break;
                        }
                }
                if(j == i)
                {
                        newstr[cnt++] = str[i];
                        printf("%c ", str[i]);
                }
        }
        printf("%d", cnt);

        return 0;
}