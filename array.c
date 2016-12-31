#include <stdio.h>
int main(void)
{
    
	int n,i,j,c=0;
	printf("enter the length");
	scanf("%d",&n);
	printf("\nenter the elements");
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("\nenter the number");
	scanf("%d",&j);
	for(i=0;a[i]<=j;i++)
	{
		if(j==a[i])
		{
			c++;
		}
	}
	printf("\n%d",c);
	return 0;
}
