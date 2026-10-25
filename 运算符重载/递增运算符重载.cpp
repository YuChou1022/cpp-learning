#include<iostream>
using namespace std;

//递增运算符

class MyInteger
{
	
	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重置前置++运算符   返回引用是为了对一个数据递增
	MyInteger operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身返回
		return *this;
	}
	//重载后置++运算符
	MyInteger operator++(int)  //int代表占位参数，用于区分前置递增和后置递增
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后记录结果返回
		return temp;
	}



private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num << endl;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}


void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{

	test01();

	/*int a = 0;

	cout << ++(++a) << endl;
	cout << a << endl;*/

	test02();


	system("pause");
	return 0;
}