/*写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串*/
#include <stdio.h>
#include <string.h>

char str[1000],ch;
int len,i=0;

int main()
{
    gets(str);
    len = strlen(str);
    while(len >= 1)
    {
        ch = str[len-1];
        printf("%c",ch);
        len--;
    }
    return 0;
}