/*Write a program that take two integers as input and print the result of addition, subtraction, multiplication and division
ID:221-35-1030*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    printf("Addition of the number is %d\n",a+b);
    printf("Subtraction of the number is %d\n",a-b);
    printf("Multiplication of the number is %d\n",a*b);
    printf("Division of the number is %d\n",a/b);
    return 0;
}
