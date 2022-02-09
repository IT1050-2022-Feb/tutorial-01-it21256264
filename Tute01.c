/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;//declere the variable
   float avg;
   
   printf("enter the mark 1 :");//getting user input
   scanf("%d",&mark1);
   printf("enter the mark 2 :");
   scanf("%d",&mark2);
   
   avg = (mark1 + mark2)/2.0;//calculate the average
   
   printf("average :%.1f",avg);//display the average
  
  return 0;
}

