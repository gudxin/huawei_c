#include<stdio.h>

int num,str[10],newstr[10],i=0,j,k,ch=0,newnum;
int main()
{
    scanf("%d",&num);
    while(num>0)
    {
        str[i]= num % 10;
        num /= 10;
        i++;
    }

    newstr[0] = str[0];
    
    ch = 0;
    for (j = 1; j < i;j++)
    {
        for (k = 0; k < i - 1;k++)
        {
            if(newstr[k]!=str[j])
            {
                if(k == i - 2)
                {
                    newstr[++ch] = str[j];
                    break;
                }
            }
            else
            {
            }
        }
    }

    
    ch = 0;
    while(newstr[ch]!='\0')
    {
        printf("%d", newstr[ch]);
        ch++;
    }
    return 0;
}