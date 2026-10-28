#include<iostream>
using namespace std;
#include<string>

template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << this->m_Name << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//类模板没有自动类型推导使用方式
void test01()
{
	//Person p("孙", 99);无法自动类型推导

	Person<string,int>p("孙",99);//
}

//2.类模板参数列表重可以有默认参数
void test01()
{
	Person<string,int>p("猪", 89);
}

int main()
{

	test01();

	






	return 0;
}