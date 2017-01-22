#include <stdio.h>
int main(void)
{
    char num[100];
    int n,i,j,x,start,temp=1;
    scanf("%d",&n);
    scanf("%s",&num);
    for(i=0;i<n;i++)
    {
        printf("%c\n",num[i]);
    }
    for(x=0;x<n;x++)
    {
        start=temp;
        while(start<n)
        {
            for(j=start;j<n;j++)
            {
                for(i=x;i<start;i++)
                {
                    printf("%c",num[i]);
                }
                printf("%c\n",num[j]);
            }
            start++;
        }
        temp++;
    }
	return 0;
}
