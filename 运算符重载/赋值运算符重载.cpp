#include<iostream>
using namespace std;

//赋值运算符重载

class Person
{
public:

	Person(int age)
	{
		m_Age = new int(age);
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//重载赋值运算符
	Person& operator=(const Person &p)
	{
		// 自赋值检查
		if (this == &p)
			return *this;

		// 释放已有资源
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		// 深拷贝
		m_Age = new int(*p.m_Age);

		// 返回对象本身以支持链式赋值
		return *this;
	}

	int *m_Age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;//赋值运算

	cout << "p1年龄：" << *p1.m_Age << endl;
	cout << "p2年龄：" << *p2.m_Age << endl;
	cout << "p3年龄：" << *p3.m_Age << endl;
}

int main()
{

	test01();




	system("pause");
	return 0;
}