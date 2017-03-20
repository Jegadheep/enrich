#include <stdio.h>

int main(void)
{
	int a[10],n,i,t1=0,t2=0,t3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   {
	       t1=a[i]/2;
	       if(t1>t2)
	       {
	           t2=t1;
	       }
	       
	   }
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   {
	       if(a[i]/2!=t2)
	       {
    	       t1=a[i]/2;
    	       if(t1>t3)
    	       {
    	           t3=t1;
    	       }
	       }
	       
	   }
	}
	printf("the second biggest number in the array is %d",t3*2);
	
	return 0;
}
