/*Write a program to find out the big of three number
ID:221-35-1030*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
    {
        printf("%d is the big number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the big number",b);
    }
    else
    {
        printf("%d is the big number",c);
    }
return 0;
}
