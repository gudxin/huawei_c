#include <stdio.h>

int num,i=0,ch;

int main()
{
    scanf("%d", &num);

    while(num > 0)
    {
        ch = num % 10;
        printf("%d",ch);
        num = num / 10;
        i++;
    }

    return 0;
}