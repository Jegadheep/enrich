#include<stdio.h>
#include<string.h>
void main()
{ 
 char i[100],j[100];
 prinft("enter the string");
 scanf("%s",i);
 strcpy(j,i);
 strrev(i);
 if(strcmp(i,j)==0)
  {
    printf("it is a palindrome"); 
  } 
 else
  {
   printf("it is not a palindrome"); 
  } 
} 
  
