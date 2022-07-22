// 7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
  int num,lsb=0,count=0,n;
  printf("Enter a number : ");
  scanf("%d",&num);
  n=num%2;
  if(n)
  {
   printf("Position of first 1 in LSB is 1");
  } 
  else
  {
     while(lsb == 0)
    {
        lsb=num%2;
        num/=2;
        count=count+1;
    }
    printf("Position of first 1 in LSB is %d",count);
  }
  return 0; 
}