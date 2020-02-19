#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],*router[2],*file_name[10],i=0,j=0,k,l=0,*p[1000];
    int len;
    const char s1[2] = " ",s2[2] = "\\";
    while(scanf("%s",str)!=EOF)
    {
        i = 0;
        router[0] = strtok(str, s1);
        printf("%s      %s", router[0], strstr(str, s1));
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
            //printf("%s\n", p[j]);
        }
        else
        {
            p[j] = file_name[i] + len - 16;
            //printf("%s\n", p[j]);
        }
        //strcat(p[j]," ");
        //strcat(p[j], router[1]);
       // printf("%s\n", p[j]);
        j++;
    }

    return 0;
}