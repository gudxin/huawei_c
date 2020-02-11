#include <stdio.h>
#include <string.h>

int main()
{
    int num,i=0;
    char *p[100],str[100];

    scanf("%d", &num);
    printf("%d\n", num);
    while(i<num)
    {
        p[i] = gets(str);
        printf("%d %s\n",i,p[i]);
        i++;
    }
    return 0;
}