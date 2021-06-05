#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("请输入两个不相同的数值：\n");
	scanf("%d %d", &num1, &num2);

	int num_max = MAX(num1, num2);

	printf("%d更大\n", num_max);
	
	return 0;
}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个不相同的数字： \n");
//	scanf("%d %d", &num1,&num2);
//
//	if (num1 > num2)
//	{
//		printf("%d更大\n",num1);
//	}
//	else
//	{
//		printf("%d更大\n",num2);
//	}
//
//	return 0;
//}