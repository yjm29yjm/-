#include <stdio.h>
int main()
{
	int count = 0;
	int num = 0;
	int i = 1;
	int a[19];

	for (i = 0; i <20; i++)
	{
		scanf_s("%d", &a[i]);

		if (a[i] % 2 == 0)
		{
			count++;
		}

		else
		{
			num++;
		}
		if(i==20)
		break;
	}
	printf("%d\n", count);
	printf("%d", num);
	return 0;

}