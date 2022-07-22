// 3. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a=10,b=100,c;
    c=a;
    a=b;
    b=c;
    printf("a is %d and b is %d",a,b);
    return 0;
}