#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base构造函数" << endl;
	}

	~Base()
	{
		cout << "Base析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son构造函数" << endl;
	}

	~Son()
	{
		cout << "Son析构函数" << endl;
	}
};

void test01()
{
	//Base b;
	Son s;
	//顺序：
	//先构造父类，再构造子类
	//析构顺序相反
}

int main()
{
	test01();

	return 0;
}