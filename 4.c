// 4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int a=10,b=100;
    b=a+b;
    a=b-a;
    b=b-a;
    printf("after swapping a is %d and b is %d",a,b);
    return 0;
}