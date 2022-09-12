#include <stdio.h>
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
		x = y;
		y = tmp;
}
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d b+%d\n", a, b);
	return 0;
}