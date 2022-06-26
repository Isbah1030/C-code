/*Write a c program to find out the sum of series 1 + 2 + ...... + n
ID:221-35-1030*/

#include<stdio.h>
int main() {
	int n,i;
	int sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	sum = (n * (n + 1)) / 2;
	printf("Sum of the series: ");
	for (i=1; i<=n; i++) {
		if (i!=n){
		   printf("%d + ",i);
		}
		else{
		  printf("%d = %d ",i,sum);
		}
	}
	return 0;
}
