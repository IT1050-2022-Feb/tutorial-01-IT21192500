/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark;//variables
  int i=1;
  int total=0;
  float avg=0;
  while(i<=2)//loop 2 times
  {
  printf("Input Subject %d Marks:",i);//prompt
  scanf("%d",&mark);//read an integer
  total+=mark;//Calculate total
  i++;
  }
  avg=total/2.0;// Calculate average
  printf("Average mark :%.2f",avg);//prompt
  
  return 0;
}
