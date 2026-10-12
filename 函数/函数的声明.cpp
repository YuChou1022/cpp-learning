#include <iostream>
using namespace std;

//函数的声明
// 声明可以写多次，但是定义只能一次
//比较函数，两个整型进行比较返回较大值

int max(int a, int b)//定义
{
	return a > b ? a : b;
}

//可以利用函数声明提前告诉编译器函数存在
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}