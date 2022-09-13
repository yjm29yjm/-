#include <stdio.h>
void print(int n)
{
	if (n > 9)

	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	unsigned int num = 0;

	scanf_s("%d ", &num);
	print(num);
	return 0;
}