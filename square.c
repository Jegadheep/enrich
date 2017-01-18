#include<stdio.h>
void main()
{
char a[4][4],i,j,k,l,num=0;
char ch=' ';
for(i=0;i<4;i++)
{
    printf("\n-------------------\n");
    printf("|");
    for(j=0;j<4;j++)
    {
        
        a[i][j]=num++;
        if(a[i][j]==0)
        {
            a[i][j]=' ';
            printf(" %c |",a[i][j]);
        }
        else
        {
            printf(" %d |",a[i][j]);
        }
    }
}
i=0;
j=0;
do
{
    printf("\n Enter your choice\n u-up,d-down,l-left,r-right,q-quit ");
    scanf("%c",&ch);
    printf("\n");
    switch(ch)
    {
        case 'u':
        a[i][j]=a[i-1][j];
        i=i-1;
        a[i][j]=' ';
        break;
        case 'd':
        a[i][j]=a[i+1][j];
        i=(i+1);
        a[i][j]=' ';
        break;
        case 'l':
        a[i][j]=a[i][(j-1)];
        j=j-1;
        a[i][j]=' ';
        break;
        case 'r':
        a[i][j]=a[i][(j+1)];
        j=(j+1);
        a[i][j]=' ';
        break;
        case 'q':
        break;
    }
    for(k=0;k<4;k++)
    {
        printf("\n-------------------\n");
        printf("|");
        for(l=0;l<4;l++)
        {
            if(a[k][l]==' ')
            {
            printf(" %c |",a[k][l]);
            }
            else
            {
            printf(" %d |",a[k][l]);
            }
        }
    }
}while(ch!='q');
    return 0;
}
