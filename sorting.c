#include <stdio.h >
void main () 
{ 
int i,j,k=0,temp,r,a[100],n;
printf ("enter the number");
scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    n=n/10;
    a[k]=r;
    k++;
  } 
  for(i=0;i<k;i++) 
  {
    for(j=i+1;j<k;j++)
    {
     if(a[i]>a[j]) 
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  } 
  for(i=0;i<k;i++)  
  {
  printf("%d",a[k]);
  } 
} 
