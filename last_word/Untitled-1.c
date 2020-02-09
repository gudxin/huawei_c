#include<stdio.h>
#include<string.h>

char stringa[5000];
int len,i,j=0;
int main()
{
    gets(stringa);
    len = strlen(stringa);
    printf("len:%d\n", len);
    for (j = 0; j < len;j++)
    {
        if(stringa[j] != ' ')
        {
        }
        else
        {
            break;
        }
    }   
    if(j == len)
    {
        printf("j:%d\n", j);
    }
    else
    {
        for (i = len-1; i >= 0;i--)
        {

            if(stringa[i] != ' ')
            {
                if(i == 0)
                {
                    j = i;
                    break;
                }
            }
            else
            {
                j = i;
                break;
            }
        }
        printf("%d\n",len-j-1);
    }

        return (0);
}