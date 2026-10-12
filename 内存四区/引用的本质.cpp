#include<iostream>
using namespace std;
//发现是引用，转换为 int* const ref=&a;
void func(int& ref)
{
	ref = 100;//ref是引用，转化为*ref=100;
}

int main()
{

	int a = 10;

	//自动转化为int* const ref=&a;指针常量指向不可改，也说明为什么引用不可以改
	int& ref = a;
	ref = 20;//内部发现ref是引用，自动转换为：*ref=20

	cout << a << endl;
	cout << ref << endl;
	//引用本质就是一个指针常量
	//引用一旦初始化后就不可以发生改变

	system("pause");
	return 0;
}