#include <stdio.h>
void main(){
	int year;
	scanf("%d", &year);
	printf("please enter a year:\n");
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	printf("%d is a leap year", year);
	}
