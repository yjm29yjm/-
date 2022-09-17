#include <stdio.h>
int main()
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	int a, b, c, d,sum;
	while (scanf_s("%d%d%d", &a, &b, &c))
	{
		sum = 0;
		for (d = 0; d < b; d++)
			sum +=days[d];
		sum +=c;
		if ((a%4 == 0 && a % 100 != 0 || a % 400 == 0) && b >= 2)
			sum +=1;
		printf("%d\n", sum);
	}
	return 0;
}
