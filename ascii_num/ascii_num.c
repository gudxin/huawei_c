/*编写一个函数，计算字符串中含有的不同字符的个数。
字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。
不在范围内的不作统计。
*/

#include <stdio.h>
#include <string.h>

char str[1000],*p;
short len,num=1,cnt;
int main()
{
    gets(str);
    len = strlen(str);
    p = str;
    while (num<len)
    {
        if(str[num])
        num++;
    }
    printf("%d", cnt );

    return 0;
}