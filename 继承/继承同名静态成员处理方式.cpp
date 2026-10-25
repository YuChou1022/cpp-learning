#include<iostream>
using namespace std;


class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base-static void func()" << endl;
	}

};
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son-static void func()" << endl;
	}
};
int Son::m_A = 100;

//同名静态成员属性
void test01()
{
	//通过对象访问数据
	cout << "通过对象访问" << endl;
	Son s;
	cout << "Son 下m_A=" << s.m_A << endl;
	cout << "Base 下m_A=" << s.Base::m_A << endl;
	//通过类名访问数据
	cout << "通过类名访问" << endl;
	cout << "Son 下 m_A=" << Son::m_A << endl;
	//第一个：：代表类名访问 第二个：：代表父类作用域下
	cout << "Base 下m_A=" << Son::Base::m_A << endl;
}
//同名静态函数
void test02()
{
	//通过对象访问
	Son s;
	s.func();
	s.Base::func();
	//通过类名访问
	Son::func();
	Son::Base::func();
}

int main()
{

	test01();	






	return 0;
}