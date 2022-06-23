#include <stdio.h>
#include <ctype.h>

int main()
{
	char unit;
	float temp;

	printf("what temperature are you checking for?\n");
	scanf("%c", &unit);
	unit = toupper(unit);
	printf("Enter temperature...\n");
	scanf("%f", &temp);
	switch (unit)
	{
	case 'F':
		temp = (temp * 9 / 5) + 32;
		printf("Temperature is %.2fc\n", temp);
		break;
	case 'C':
		temp = ((temp - 32) * 5) / 9;
		printf("Temperature is %.2f\n", temp);
		break;

	default:
		printf("Invalid input\n");
		break;
	}

	return 0;
}