#include <stdio.h>
void main(){
	printf("the number 555 in various form:\n");
	printf("Without any modifier: \n");
	printf("[%d]\n", 555);
	printf("With - modifier: \n");
	printf("[%-d]\n", 555);
	printf("With digit string 10 as modifier:\n");
	printf("[%10d]\n", 555);
	printf("with 0 as modifier: \n");
	printf("[%0d]\n", 555);
	printf("With 0 and digit string 10 as modifiers:\n");
	printf("[%010d]\n", 555);
	printf("With -, 0 and digit string 10 as modifiers: \n");
	printf("[%-010d]\n", 555);
}
