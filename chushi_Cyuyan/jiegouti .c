﻿#define _CRT_SECURE_NO_WARNINGS
/*
#include <stdio.h>
#include <string.h>

//创建一个结构体类型
struct Book
{
	char name[20];  //C语言程序设计
	short price;  //55
};  //分号是用来结束定义的
int main()
{
	//利用结构体类型 - 创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 55 };
	strcpy(b1.name, "C++");  // strcpy-string copy -字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);

	//struct Book* pb = &b1;
	// 利用pb打印出我的书名和价格
	// . 操作符应用到结构体变量 . 可以找到成员
	// -> 意思是结构体指针->成员
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price); */

	/*printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d元\n", b1.price);
	
	return  0;
}
*/

//int main()
//{
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	*/
	/*double d = 3.14;
	double* pd = &d;  //32-4   64-8
	printf("%d\n", sizeof(pd));
	//*pd = 5.5;
	//printf("%lf\n", d);
	*/
	/*int a = 10;  //申请了4个字节的空间
	//print("%d\n", &a);
	int* p = &a;  //p是一个变量——指针变量
	//printf("%p\n",p);
	*p = 20;     // * - 解引用操作符/间接访问操作符
	printf("a = %d\n",a);
	*/
//	return 0;
//}




