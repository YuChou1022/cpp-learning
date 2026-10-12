#include<iostream>
using namespace std;

//深拷贝与浅拷贝问题

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person (int age,int height)
	{
		m_Age = age;
		m_Height=new int(height);
		cout << "Person的有参构造函数" << endl;
	}

	//自己实现拷贝构造函数解决浅拷贝问题
	Person(const Person& p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;编译器默认实现这行
		//深拷贝操作

		m_Height=new int(*p.m_Height);
	}

	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person析构函数调用" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(18, 183);
	cout << "p1年龄为：" << p1.m_Age << " 身高为：" <<*p1.m_Height << endl;

	Person p2(p1);
	cout << "p2年龄为：" << p2.m_Age <<"p2身高为：" << *p2.m_Height << endl;
}


int main()
{

	test01();






	system("pauese");
	return 0;
}