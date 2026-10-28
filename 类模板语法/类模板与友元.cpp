#include<iostream>
#include<string>
using namespace std;
//通过全局函数打印Person信息

//类外实现时，编译器必须先认识 Person 类和 printPerson2 这个函数模板
//否则 friend void printPerson2<>(...) 会报 C2912：不是函数模板的特化
template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2> p);

template<class T1, class T2>
class Person
{

	//全局函数类内实现
	friend void printPerson(Person<T1, T2> p)
	{
		cout << p.m_Name << " " << p.m_Age << endl;
	}

	//类外实现
	//加空模板参数列表
	//如果全局函数类外实现需要让编译器提前知道这个函数存在
	friend void printPerson2<>(Person<T1, T2> p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:

	T1 m_Name;
	T2 m_Age;

};

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << p.m_Name << " " << p.m_Age << endl;
}

//1.全局函数类内实现
void test01()
{
	Person<string, int>p("T",20);

	printPerson(p);
}

//2.全局函数类外实现
void test02()
{
	Person<string, int>p("j", 20);

	printPerson2(p);
}

int main()
{
	test01();
	test02();

	return 0;
}