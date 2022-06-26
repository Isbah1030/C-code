/*Write C program to create an array of students marks. Print the average marks.
ID:221-35-1030*/

#include<stdio.h>
int main() {
	int marks[20], i, sum=0, avg;

	printf("Enter the numbers of the students: \n");
	for(i=0; i<20; i++){
	   printf("Marks of student %d: ", i+1);
	   scanf("%d", &marks[i]);
	}
	for(i=0; i<20; i++){
	    if(i!=19){
	        sum = sum + marks[i];
	    }
	    else{
	        sum = sum + marks[i];
	        avg = sum / 20;
	    }
	}
	printf("Average numbers of students: %d\n", avg);
	return 0;
}
