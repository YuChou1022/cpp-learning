#include<iostream>
using namespace std;
#include<string>

//类模板对象做函数参数
//1.指定传入类型
template<class T1,class T2>
class Person
{
public:

	string m_Name;
	int m_Age;

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << this->m_Name << this->m_Age << endl;
	}


};

void printPerson(Person<string,int>&p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int>p("孙", 100);
	printPerson(p);
}

//2.参数模板化
template<class T1,class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1类型" << typeid(T1).name() << endl;
	cout << "T2类型" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>p("猪", 90);
	printPerson2(p);
}

//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
}

void test03()
{
	Person<string, int>p("唐僧", 30);
}

int main()
{


	test01();
	test02();
	test03();



	return 0;
}