#include <stdio.h>
 void main(){
 	int num1, num2;
 	num2 = 0;
 	do{ 
	 printf("\nEnter the number: ");
 	 scanf("%d", &num1);
 	 printf("No. is %d", num1);
 	 num2++;
	  }while(num1 !=0);
	  printf("\nThe total numbers entered ware %d, --num2");
 }
