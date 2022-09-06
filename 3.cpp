#include <stdio.h>
int main()
{
	int age = 85;
	if (age < 18)
		printf("未成年\n");
	else
		if (18 < age && age < 28)
		printf("青年\n");
	else
		if (28 < age && age < 50)
		printf("老年\n");
	else
		if (age > 50 && age < 90) 
				printf("老逼登\n");


	return 0;
}