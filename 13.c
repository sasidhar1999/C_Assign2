/* 13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right */

#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    n=num%10;
    num/=10;
    num = num+(n*100);
    printf("Output is %d",num);
    return 0;
}