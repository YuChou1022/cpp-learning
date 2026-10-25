#include <iostream>
using namespace std;

class Base
{
public:
	//纯虚函数
	//类只要有一个纯虚函数，这个类就是抽象类
	//抽象类特点：
	//1.无法实例化
	//2.抽象类子类必须重写父类纯虚函数。否则也属于抽象类
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func() {
		cout << "func()函数调用" << endl;
	};


};

void test01()
{
	//Base 无法实例化对象
	//new Base;

	Base* base = new Son;
	base->func();
	delete base;
}

int main()
{


	test01();




	return 0;
}