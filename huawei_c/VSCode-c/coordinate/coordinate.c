/*
开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。
从（0,0）点开始移动，从输入字符串里面读取一些坐标，并将最终输入结果输出到输出文件里面
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000],*token;
    const char s[2] = ";";
    int a = 0, b = 0,step = 0;

   while(gets(str))
    {
        token = strtok(str, s);

        while(token != NULL)
        {
            step = 0;
            if(strlen(token)==3)
            {
                if((*(token + 1)>='0')&&(*(token + 1)<='9')&&(*(token + 2)>='0')&&(*(token + 2)<='9'))
                {
                    step = 10*(*(token + 1) - '0')+*(token+2)-'0';
                }
            }
            else if(strlen(token)==2)
            {
                if((*(token + 1)>='0')&&(*(token + 1)<='9'))
                {
                    step =*(token+1)-'0';
                }
            }
            else
            {
                step = 0;
            }


            if((*token)=='W')
            {
                b += step;
            }
            else if((*token)=='S')
            {
                b -= step;
            }
            else if((*token)=='A')
            {
                a -= step;
            }
            else if((*token)=='D')
            {
                a += step;
            }
            else
            {
            }
            token = strtok(NULL, s);
        }
        printf("%d,%d\n", a, b);
    }
    
    return 0;
}
