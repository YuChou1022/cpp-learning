#include <iostream>
using namespace std;

//函数分文件编写
//两数交换函数

//函数声明
//void swap(int a, int b);
//函数定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);


	system("pause");
	return 0;
}

//1.创建.h后缀名的头文件
//2.创建.cpp后缀名源文件
//3.在头文件中先写函数声明
//4.在源文件中先写函数的定义