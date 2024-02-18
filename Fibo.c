//Joshua Kwemboi ENE212-0088/2021
#include<stdio.h>
//fuction declaration
int generateFibonacci(int n);
int main()
{
int n,value;
printf("Enter the value of n:");
scanf("%d",&n);
//calling
value=generateFibonacci(n);


return 0;
}
//function definition
int generateFibonacci(int n){
int a=0,b=1,Nextvalue,value;
printf("Fibonacci Series with %d terms: \n",n);
for(int i=0; i<=n;i++){
printf("%i, ",a);
Nextvalue =a+b;
a = b;
b = Nextvalue;
}
return a;
}
