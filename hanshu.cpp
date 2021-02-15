/*
	2021/2/3
	判断一个数字是否是素数
	用单独的函数来实现，代码的可重用性提高

#include <stdio.h>

bool is_prime(int val)
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (0 == val % i)
			break;
	}
	if (i == val)
		return true;
	else
		return false;


}
int main() {
	int val;
	int i;

	scanf_s("%d", &val);
	if (is_prime(val))
		printf("Yes!\n");
	else
		printf("No!/n");
	return 0;
}
*/
/*
#include <stdio.h>
#pragma warning(disable:4996)
int checksc(int height);
// 判断超女身材函数的定义
int checksc(int height)
{
	if ((height >= 160) && (height < 165)) return 1;  // 娇小
	if ((height >= 165) && (height < 175)) return 2;  // 标准
	if ((height >= 175) && (height < 180)) return 3;  // 高挑

	return 0;   // 不合格
}
int main()
{
	int sg = 0;
	printf("请输入超女的身高： ");
	scanf("%d", &sg);

	int sc = 0;

	sc = checksc(sg);

	printf("超女的身材是: %d\n");
	return 0;
}
*/

