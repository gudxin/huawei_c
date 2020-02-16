#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int num,len,*str;
int i=0,j=0,k=1,list[1000],ch;
int main()
{
    //这个要记住牛课网的规定，花费了6小时就因为这个问题，后面的printf()函数出现了问题
    while(scanf("%d",&num) != EOF)
    {
        //scanf("%d", &num);
        str = (int *)malloc(num);
        for(i = 0;i < num ;i++)
        {
            scanf("%d",&list[i]);
        }
    /*
        i = 0;
    
        while(i < num)
        {
            printf("%d ", list[i]);
            i++;
        }
    */

    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - 1 - i; j++)
        {
            if (list[j] > list[j + 1]) 
            {
                ch = list[j];
                list[j] = list[j + 1];
                list[j + 1] = ch;
            }
        }
    }
        /*
        len = 0;
        while(list[len] != '\0')
        {
            printf("%d ", list[len]);
            len++;
        }
        */
        str = list;
        printf("%d\n",*str);
        for(k = 1;k < num;k++)
        {
            if(list[k] != list[k-1])
            {
                *(str+k) = list[k];
                printf("%d\n",*(str+k));
            }
            else
            {
            }
        }
    /*
        i = 0;
        while(str[i] != 0)
        {
            printf("%d\n",newlist[i]);
            i += 4;
        }
     */
    }
    return 0;
}