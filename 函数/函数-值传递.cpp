#include <iostream>
#include <Windows.h>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换函数

//如果一个函数不需要一个返回值，声明时可以写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;



	//return:返回值不需要的时候，可以不写return
}
int main()
{
	SetConsoleOutputCP(CP_UTF8); // 控制台使用 UTF-8 显示中文
	int a = 10;
	int b = 20;
	cout << "a=" << a << endl;
	cout << "b" << b << endl;



	//函数形参改变不会影响形参
	swap(a, b);





	system("pause");
	return 0;
}