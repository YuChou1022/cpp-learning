#include<iostream>
using namespace std;

//函数重载
//可以让函数名相同，提高复用性

//函数重载满足条件
//1.同一个作用域下
//2.函数名相同
//3.函数参数类型，个数，顺序不同
void func()
{
	cout << "func调用" << endl;
}
void func(int a)
{
	cout << "func" << endl;
}
int main()
{

	func();
	func(1);
	//函数返回值不可以作为重载条件


	return 0;
}