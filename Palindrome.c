//Joshua Kwemboi ENE212-0088/2021
#include <stdio.h>
//Function Declaration
int isPalindrome(int number);
int main() {
int n, Outcome;
printf("Enter a number:");
scanf("%i", &n);
//Function calling
Outcome = isPalindrome(n);
//output
if (Outcome == 1) {
printf("%i is a palindrome value.\n", n);
} else {
printf("%i is not a palindrome value.\n", n);
}
return 0;
}
//Function definition
int isPalindrome(int number) {
int NewNumber = number;
int ReversedN = 0;

while (number > 0) {
int digit = number % 10;
ReversedN = ReversedN * 10 + digit;
number /= 10;
}
return NewNumber == ReversedN ? 1 : 0;
}

