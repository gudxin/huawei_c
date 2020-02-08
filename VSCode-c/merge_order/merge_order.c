#include<stdio.h>

int num,indexs[1000][2],newindexs[1000][2],i,j,index0,value0,sum;
void merge(void);
void ascending_order(void);

void merge(void)
{
    newindexs[0][0] = indexs[0][0];
    newindexs[0][1] = indexs[0][1];
    j = 0;
    for(i=0;i<num;i++)
    {
        if(indexs[i][0]!=indexs[i+1][0])
        {
            j++;
            newindexs[j][0] = indexs[i+1][0];
            newindexs[j][1] = indexs[i+1][1];
        }
        else
        {
            newindexs[j][1] += indexs[i+1][1];
        }
    }
}


void ascending_order()
{
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(indexs[j+1][0]<=indexs[j][0])
            {
                index0 = indexs[j+1][0];
                indexs[j + 1][0] = indexs[j][0];
                indexs[j][0] = index0;

                value0 = indexs[j + 1][1];
                indexs[j + 1][1] = indexs[j][1];
                indexs[j][1] = value0;
            }
        }
    } 
}

int main()
{
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d %d",&indexs[i][0],&indexs[i][1]);
        
    }
    printf("\n\n");
    ascending_order();
    merge();
    for(i=0;i<j;i++)
    {
        printf("%d %d\n",newindexs[i][0],newindexs[i][1]);
        
    }
    return 0;
}