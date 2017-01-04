#include<stdio.h>
void main() 
{ 
  int i,j,c=0,d,n;
  printf("enter the order of the square");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
       {
        a[i][j]=0;
       } 
    }
   for(j=n/2;i=0;j<n+1;i<n;i--;j++) 
   {
    if(i==-1) 
    {
     i=n-1;
    } 
    if(j==n) 
    {
      j=0;
    } 
    if(a[i][j]>0)
    {
    a[i+1][j]=c++;
    } 
    else
    {
    a[i][j]=c++;
    } 
   } 
  
  
