#include <stdio.h>
#include <string.h>


int main()
{
    int num,i=0;
    char *p[1000];
    scanf("%d", &num);

    while(i<num)
    {
        gets(p[i]);
        puts(p[i]);
        i++;
    }
    return 0;
}