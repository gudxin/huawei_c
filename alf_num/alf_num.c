#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char string[5000]={};
char ch = 't';
short len = 0,i=0,count;
int main()
{
    gets(string);
    ch = getchar();
    while(string[len]!='\0')
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (ch - string[i]  == 0 || abs(ch - string[i]) == 32)
        {
            count++;
        }
        else
        {
        }
    }
    printf("%d\n", count);
    return 0;
}


