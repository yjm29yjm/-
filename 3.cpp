#include <stdio.h>
int main()
{
	int age = 85;
	if (age < 18)
		printf("δ����\n");
	else
		if (18 < age && age < 28)
		printf("����\n");
	else
		if (28 < age && age < 50)
		printf("����\n");
	else
		if (age > 50 && age < 90) 
				printf("�ϱƵ�\n");


	return 0;
}