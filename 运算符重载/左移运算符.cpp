#include<iostream>
using namespace std;

//左移运算符重载

class Person
{
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	friend ostream& operator<<(ostream& a, Person& p);
private:

	//利用成员函数重载左移运算符
	//不会利用成员函数重载<<运算符，因为无法实现cout 在左边

	/*void operator<<(Person& p)
	{

	}*/

	int m_A;
	int m_B;

};

//只能全局函数重载<<
ostream&  operator<<(ostream& a, Person& p)//本质oprator<<(cout,p)简化cout <<p;
{
	cout << "m_A=" << p.m_A << "p.m_B" << p.m_B << endl;
	return a;
}

void test01()
{
	Person p(10, 10);

	cout << p << endl;
}

int main()
{

	test01();



	system("pause");
	return 0;
}