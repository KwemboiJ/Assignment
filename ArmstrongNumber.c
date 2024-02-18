/*Joshua Kwemboi ENE212-0088/2021*/
#include<stdio.h>
#include<math.h>
// Function declaration
int isArmstrong(int n);
int main() {
int N;
printf("Enter the value of N: ");
scanf("%i", &N);
// Function calling and outputs
if (isArmstrong(N)) {
printf("%i is an Armstrong number.\n", N);
} else {
printf("%i is not an Armstrong number.\n", N);
}
return 0;
}
// Function definition
int isArmstrong(int n) {
int InitialN = n;
int Digits = 0;
int sum = 0;
// Count the number of digits
while (InitialN != 0) {
InitialN /= 10;
Digits++;
}
 // Reset originalN to the input number
InitialN = n;
// Calculate the sum of each digit raised to the power of the number of digits
while (InitialN != 0) {
int digit = InitialN% 10;
sum += pow(digit, Digits);
InitialN /= 10;}
// Check if the number is Armstrong
    return (sum == n);
}

