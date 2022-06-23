#include <stdio.h>

int main()
{
	char operator;
	double num1;
	double num2;
	double result;

	printf("What mathematical ops?\n");
	scanf("%c", &operator);

	printf("WHats number 1?\n");
	scanf("%lf", &num1);

	printf("WHats number 2?\n");
	scanf("%lf", &num2);

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("Invalid operator");
		break;
	}
	printf("Result = %.2f\n", result);
	return 0;
}