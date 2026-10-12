#include<iostream>
using namespace std;

//函数重载注意事项
//1，引用作为重载的条件
void func(int& a)
{
	cout << "func" << endl;
}

void func(const int& a)
{
	cout << "func喵~" << endl;
}

//函数重载碰到默认参数
void func2(int a)
{
	cout << "喵喵喵~~~" << endl;
}
void func2(int a, int b=10)//当函数重载碰到默认参数，出现二义性，尽量避免喵·
{
	cout << "可爱的我又出现了" << endl;
}
int main()
{
	int a = 10;
	func(a);

	func(10);

	//func2(10);
	func2(10, 10);
	return 0;
}
//开始懂了
//我是世界上最忧郁之人