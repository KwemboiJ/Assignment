#include <stdio.h>
//func`for ascending order:here
int ascendingOrder(int marks[10]) {
   int order, i, j;
   for (i = 0; i < 9; i++) {
   for (j = 0; j < 9 - i; j++) {
    
   if (marks[j] > marks[j + 1]) {
order = marks[j];
marks[j] = marks[j + 1];
marks[j + 1] = order;
    }
   }
  }
}
int main() {
   int marks[10] = {74, 47, 34, 90, 88, 86, 79, 59, 74};
   //Here it prints out my first 9 initial array.
   printf("My array:\n");
   for (int i = 0; i < 10; i++) {
    printf("%i ", marks[i]);
 }//at the point of i==4,it prompts you to en
   for (int i = 0; i < 10; i++) {
   if (i == 4) {
// Prompt the user to enter the 5th number
  printf("\nEnter the 5th number:");
  scanf("%i", &marks[i]);
 }
}//I hope it's visible to everyone?
//callin funct'
ascendingOrder(marks);
  printf("\nOrdered arr:\n");
  for (int i = 0; i < 10; i++) {
  printf("%i ", marks[i]);// same code in gedit
}
  return 0;
}

