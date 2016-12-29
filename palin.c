#include<stdio.h>
viod main()
{
	int n,m,rev=0,r;
  printf("enter the number");
  scanf("%d",&n);
  m=n;
	while(n>0)
  {
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
  if(rev==m)
  {
	printf("the number is a palindrome");
  }
  else
  {
  printf("the number is not a palindrome");
  }
}
