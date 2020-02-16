//6.72.161.12~255.252.0.0(24行)
#include<stdio.h>
#include<string.h>

int main()
{

    int ip_num[8],result[7]={},mask_bin[32],flag1,flag2,flag3,i,j,k,cnt_0,cnt_1;

    while(scanf("%d.%d.%d.%d~%d.%d.%d.%d", &ip_num[0], &ip_num[1], &ip_num[2], &ip_num[3], &ip_num[4], &ip_num[5], &ip_num[6], &ip_num[7]) != EOF)
    {
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;
        cnt_0 = 0;
        cnt_1 = 0;
        j = 0;
        for (i = 0; i < 8; i++)
        {
            if (ip_num[i] < 0 || ip_num[i] > 255)
            {
                result[5]++;
                flag1 = 1;
                break;
            }
        }

            if(flag1 == 0)
            {
                for (i = 4; i < 8;i++)
                {
                    k = 128;
                    if(ip_num[i] == 0)
                    {
                        cnt_0++;
                    }
                    else if(ip_num[i] == 255)
                    {
                        cnt_1++;
                    }

                    while(j<=(8*(i-3)-1))
                    {
                        if(ip_num[i] / k)
                        {
                            mask_bin[j] = 1;
                            ip_num[i] = ip_num[i] - k;
                        }
                        else
                        {
                            mask_bin[j] = 0;
                        }
                        printf("k:%d %d\n",k, mask_bin[j]);
                        k /= 2;
                        j++;
                    }
                    printf("\n");
                }
                if(cnt_0 == 4 || cnt_1 == 4)
                {
                    result[5]++;
                    flag2 = 1;
                }
                if(flag2==0)
                {
                    for (i = 0; i < 31;i++)
                    {
                        if(mask_bin[i+1]>mask_bin[i])
                        {
                            result[5]++;
                            flag3 = 1;
                            break;
                        }
                    }
                }
            }
            if(flag1 == 0 && flag2 == 0 && flag3 == 0)
            {
                if(ip_num[0]>=1&&ip_num[0]<=126)
                    result[0]++;
                else if(ip_num[0]>=128&&ip_num[0]<=191)
                    result[1]++;
                else if(ip_num[0]>=192&&ip_num[0]<=223)
                    result[2]++;
                else if(ip_num[0]>=224&&ip_num[0]<=239)
                    result[3]++;
                else if(ip_num[0]>=240&&ip_num[0]<=255)
                    result[4]++;
                if(ip_num[0]==10 || (ip_num[0]==172&&ip_num[1]>=16&&ip_num[1]<=31) || (ip_num[0]==192 && ip_num[1]==168))
                {
                    result[6]++;
                }
            }
    }

    printf("%d %d %d %d %d %d %d", result[0], result[1], result[2], result[3], result[4], result[5], result[6]);
 

    return 0;
}