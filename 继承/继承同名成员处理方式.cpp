#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func()调用" << endl;
	}

	void func(int a)
	{
		cout << "Base-func(int a)调用" << endl;
	}

	int m_A;
};

class Son :public Base
{
public:

	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func()调用" << endl;
	}

	int m_A;
};

//同名成员属性
void test01()
{
	Son s;
	cout << "Son 下m_A=" << s.m_A << endl;
	cout << "Base 下m_A=" << s.Base::m_A << endl;//通过子类对象访问父类中同名成员，需要加作用域
}

//同名成员函数
void test02()
{
	Son s;

	s.func();//直接调用子类成员

	//调用父类中同名函数
	s.Base::func();
}

int main()
{

	test01();

	test02();



	return 0;
}