#include <stdio.h>
void main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=n+1;i>0;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("The next prime number is %d",i);
            break;
        }
        flag=0;
    }
}
