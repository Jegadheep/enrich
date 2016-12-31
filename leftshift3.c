include<conio.h>
viod main() 
{  
    int n,num,p=1,d,r,x=1,left;
    printf("enter a 5 digit number");
    scanf("%d",&n);
    printf("\n no.times to rotate");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
     p*=10;
    } 
    d=n/p;
    r=n-(d*p); 
    while(x <= d) 
    {
    x *= 10;
    } 
    left=(r * x)+d; 
    printf("\n output:%d",left);
