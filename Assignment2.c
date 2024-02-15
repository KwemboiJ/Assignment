#include<stdio.h>
int main ()
{
float a,b;
printf("Enter a and b: ");
scanf("%f  %f",&a,&b);

for (int i=0; i<4; i++){

if (i==0)
{
printf("The Sum of %.2f and %.2f is %.2f.\n",a,b,a+b);
}
else if (i==1)
{
printf("The Difference of %.2f and %.2f is %f.\n",a,b,a-b);
}
else if (i==2 )
{
printf("The Multiplication of %.2f and %.2f is %.2f.\n",a,b,a*b);
}
else if (i==3)
{
printf("The Division of %.2f and %.2f is %.2f.\n",a,b,a/b);
} else 
break;
}
}
