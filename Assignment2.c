//Joshua Kwemboi ENE212-0088/2021
#include<stdio.h>
float Sum(float,float),Difference(float,float),Division(float,float),Multiplication(float,float);//Function Declaration
int main ()
{
float a,b,Mul,Div,Sum1,Diff;
printf("Enter a and b: ");
scanf("%f  %f",&a,&b);
//Calling
Sum1= Sum(a,b);
Diff= Difference(a, b);
Mul=Multiplication(a, b);
Div=Division(a, b);
//output
printf("The sum of %.2f and %.2f is %.2f.\n",a,b,Sum1);
printf("The Difference of %.2f and %.2f is %.2f.\n",a,b,Diff);
printf("The Division of %.2f and %.2f is %.2f.\n",a,b,Div);
printf("The Multiplication of %.2f and %.2f is %.2f.\n",a,b,Mul);
return 0;
}
// Fuction definition
float Sum(float a,float b){return a+b;}
float Difference(float a,float b){return a-b;}
float Multiplication(float a,float b){return a*b;}
float Division(float a,float b){return a/b;}


