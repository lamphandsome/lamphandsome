#include <stdio.h>
void main(){
	int cnt=0, num;
	do{
		printf(" enter the number: ");
		scanf("%d", &num);
		printf("\nno. is %d\n", num);
		cnt++;
	}while(num != 0);
		printf("\n The total numbers entered were %d", --cnt);
	}

