/*
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开
*/
#include <stdio.h>
#include <string.h>

char str[1000], space[100],*newstr[100];
const char s[2] = " ";
int len, i = 0,cnt = 0;

int main()
{
    gets(str);
    len = strlen(str);
    newstr[i] = strtok(str, s);
    while( newstr[i] != NULL ) 
    {
        i++;
        newstr[i] = strtok(NULL, s);

    }

    i = i - 1;
    for ( ; i >= 0;i--)
    {
        printf("%s ", newstr[i]);
            
    }

    return 0;
}