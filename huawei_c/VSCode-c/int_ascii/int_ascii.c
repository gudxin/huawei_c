//输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
//这个数转换成2进制后，输出1的个数
#include<stdio.h>

int main()
{
    int num,rest,cnt=0;
    scanf("%d",&num);

    while(num>0)
    {
        rest = num % 2;
        if(rest == 1)
        {
            cnt++;
        }
        num = num / 2;
    }
    printf("%d", cnt);
    return 0;
}