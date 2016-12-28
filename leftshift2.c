#include <stdio.h >
void main() 
{
    int r,p,n,q,num;
    printf("enter a 5 digit number");
    scanf("%d",&n);
    printf("\n no.times to rotate");
    scanf("%d",&num);
    for(int j=0;j<num;j++)
   {
    p=n;
    for(int i=0;i<5;i++)
    {
    r=p%10;
    p=p/10;
    } 
    q=n-(r*10000);
    n=(q*10)+r;
   } 
   printf("\n output:%d",n); 
  } 
