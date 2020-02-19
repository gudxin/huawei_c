#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],*router[2],*file_name[10],i=0,j=0,*p[1000];
    int len;
    const char s1[2] = " ",s2[2] = "\\";
    while(gets(str))
    {
        router[0] = strtok(str, s1);
        router[1] = strtok(NULL, s1);
        //printf("%s   %s\n", router[0], router[1]);
        file_name[i] = strtok(router[0], s2);
        while(file_name[i] != NULL)
        {
            i++;
            file_name[i] = strtok(NULL, s2);            
        }
        len = strlen(file_name[--i]);
        if(len <= 16)
        {
            p[j] = file_name[i];
            printf("%s\n", p[j]);
        }
        else
        {
            p[j] = file_name[i] + len - 16;
            printf("%s\n", p[j]);
        }
        j++;
    }
    return 0;
}