#include <stdio.h>
char num[50], n;
void subset(int start, int x, int sub)
{
    int i,j;
    if (x-start+1==sub)
    {
        if (sub==1)
        {
            for (i=0;i<n;i++)
            {
                printf("%c\n",num[i]);
            }
        }
        else
        {
            for (j=x;j<n;j++)
            {
                for (i=start;i<x;i++)
                {
                    printf("%c",num[i]);
                }
                printf("%c\n",num[j]);
            }
            if (start!=n-sub)
            {
                subset(start+1,start+1,sub);
            }
        }
    }
    else
    {
        subset(start,x+1,sub);
    }
}
int main()
{
    int i,len;
    scanf("%d",&len);
    scanf("%s",num);
    n = len;
    for (i = 1;i <= n;i++)
    {
        subset(0, 0, i);
    }
}
