#include <stdio.h>
float Sum(float a, float b);
float Substraction(float a, float b);
float Multiplication(float a, float b);
float Division(float a, float b);

int main(){
	float num1, num2;
	printf("\nso hang a la` : ");
	scanf("%f", &num1);
	printf("\nso hang b la` : ");
	scanf("%f", &num2);
	printf("\nThuc hien cac phep tinh :\n");
	
	float result1 = Sum(num1, num2);
	printf("\n  a + b = %.1f", result1);
	float result2 = Substraction(num1, num2);
	printf("\n  a - b = %.1f", result2);
	float result3 = Multiplication(num1, num2);
	printf("\n  a * b = %.1f", result3);
	float result4 = Division(num1, num2);
	printf("\n  a / b = %.1f", result4);
	return 0;
}
float Sum(float a, float b){
	return a+b;
}
float Substraction(float a, float b){
	return a-b;
}
float Multiplication(float a, float b){
	return a*b;
}
float Division(float a, float b){
	return a/b;
}
