#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter Physics Number: \n");
    scanf("%d",&marks[0]);

    printf("Enter Structure Programming Number: \n");
    scanf("%d",&marks[1]);

    printf("Enter Structure Programming Lab Number: \n");
    scanf("%d",&marks[2]);

    printf("Physics number is %d\n",marks[0]);
    printf("Structure Programming number is %d\n",marks[1]);
    printf("Structure Programming Lab number is %d\n",marks[2]);
    return 0;

}
