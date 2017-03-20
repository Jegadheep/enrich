#include <stdio.h>

int main(void)
{
	int a[10],n,i,t1=0,t2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   {
	       if(a[i]>t1)
	       {
	           t1=a[i];
	       }
	       
	   }
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   {
	       if(a[i]!=t1)
	       {
    	          if(a[i]>t2)
    	       	  {
    	             t2=a[i];
    	          }
	       }
	       
	   }
	}
	printf("the second biggest number in the array is %d",t2);
	
	return 0;
}
