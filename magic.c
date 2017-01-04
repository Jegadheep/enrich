#include<stdio.h>
void main() 
{
	int i,j,c=1,n,a[100][100];
	scanf("%d",&n);        
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        a[i][j]=0;
	    }
	}
	i=0;
	j=n/2;
	while(c<=n*n)
	{
	    a[i][j]=c;
	    i-=1;
	    if(i<0)
	    {
	        i=n-1;
	    }
	    if((j+1)>(n-1)){
	        j=(j+1)%n;
	    }
	    else
	    {
	        j=j+1;
	    }
	    if(a[i][j]!=0){
	        j-=1;
	        if(j<0){
	            j=n-1;
	        }
	        if((i+2)>(n-1)){
	        i=(i+2)%n;
	        }
	        else{
	            i+=2;
	        }
	    }
	    c++;
	}
	
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}    
	    
	return 0;
}
