#include<iostream>
using namespace std;


//函数模板

//两个整型交换函数
void swapInt(int& a, int& b)
{
	int temp;
	a = b;b = temp;
}

//交换两个两个浮点型函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

void test01()

{
	int a = 10;
	int b = 20;

	/*swapInt(a, b);*/
	//利用函数模板来交换
	//1.自动类型推导
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);

	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
}

//函数模板
template<typename T>   //声明一个模板，告诉编译器后面紧跟代码不要报错
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{







	return 0;
}