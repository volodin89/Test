#include<stdio.h>
#include"task1.h"
#include "pch.h"

int main()
{
	int age = 0;
printf("Enter your age: ");
scanf_s("%d", &age);
if (ageCheck(age) == 1) printf("Access granted\n");
else printf("Access denied\n");
return 0;
}