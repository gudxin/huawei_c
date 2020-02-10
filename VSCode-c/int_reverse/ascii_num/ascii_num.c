#include<stdio.h>
#include<string.h>

char str[1000];
int num=0;

int main()
{
    while(scanf("%c",(str+num))!= EOF)
    {
        num++;
    }
    printf("%d\n", num-1);
    /*
    while(str[num]!='\0')
    {
        printf("%c\n", str[num]);
        num++;
    }
    */
        return 0;
}