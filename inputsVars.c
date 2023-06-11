#include <stdio.h>

int main()
{
char name[] = "Luis";
int age = 19;
int birthYear;
printf("My name is %s, I am %d years old \n", name, age);
// Can not print ints directly, odd. Only strings i guess
printf("%d \n",age);
printf("What year were you born in? \n",age);
scanf( "%d", &birthYear);
printf("Your name is %s, you were born in %d and are %d years old \n", name, birthYear, age);
return 0;
}