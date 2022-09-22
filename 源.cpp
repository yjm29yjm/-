#include<stdio.h>
int main()
{
	int i, n, x, j;//定义循环变量i，循环次数n和未知数x以及乘积j
	while (scanf_s("%d", &n) != EOF)//当输入未强制终止
	{
		j = 1;//初始化j的结果
		for (i = 1; i <= n; i++)//循环n次，每次输入一个x
		{
			scanf_s("%d", &x);//输入x，开始进行判定
			if (x % 2 == 1 || x % 2 == -1)//如果是奇数
				j *= x;//累乘
		}
		printf("%d\n", j);//输出乘积的结果
	}
	return 0;//程序正常结束
}
