#include<stdio.h>

int main ()
{
int a,b,sum,difference;
printf("Enter the value  of a and b with space between:");
scanf("%i %i",&a,&b);
sum=a+b;
difference=a-b;
printf("The Sum of %i and %i is:%i.\n",a,b,sum);
printf("The difference of %i and %i is:%i.\n",a,b,difference);
printf("The Sum and difference of %i and %i is %i and %i.\n",a,b,sum,difference);

return 0;
}

