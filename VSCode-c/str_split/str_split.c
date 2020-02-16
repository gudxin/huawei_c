#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char i=0,j=0,k=0,str[100],num,std_len = 8;
char flag,rest;
void len_less_8(char *string);
void len_more_8(char *string);

void len_less_8(char *string)
{
    for (i = 0; i < num;i++)
    {
        printf("%c", *(string+i));
    }
    for (; i < std_len;i++)
    {
        *(string+i) = 0;
        printf("%d", *(string+i));
    }
    printf("\n");
}

void len_more_8(char *string)
{
    flag = num / std_len;
    rest = num % std_len;
    for (j = 0; j < flag;j++)
    {
        for (k = 0; k < std_len;k++)
        {
            printf("%c", *(string + std_len * j + k));
        }
        k = 0;
        printf("\n");
    }
    if(rest!=0)
    {
        for (i = 0; i < rest;i++)
        {
            printf("%c", *(string + std_len * flag + i));
        }
        for (; i < std_len;i++)
        {
            printf("0");
        }
        printf("\n");
        
    }
    else
    {

    }
}

int main()
{

    //char *gets(char *str)
    //str这是一个字符数组的指针，该数组存储了C字符串
    //eg:   *p = str
    //      gets(p);
    while(gets(str))
    {
        num = strlen(str);

        if(num < std_len)
        {
            len_less_8(str);
        }
        else
        {
            len_more_8(str);
        }
    }
        return 0;
}