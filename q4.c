/*Enter a six digit number and show the result of sum and show the problems in reverse order.
ID:221-35-1030*/

#include <stdio.h>

void main()
{
    int num,r,Sum=0, sum=0,t, i;

    printf("Input a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         Sum = Sum + r;
         sum=sum*10+r;
    }
    printf("The sum of the numbers : %d \n",Sum);
    printf("The number in reverse order is : %d \n",sum);
}
