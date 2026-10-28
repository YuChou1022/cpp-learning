#include<iostream>
using namespace std;
#include<string>

template<class T1,class T2>
class Person
{
public:

	Person(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	m_Name = name;
	m_Age = age;
}

template<class T1,class T2>
void Person<T1, T2>::showPerson()
{
	cout << this->m_Name << m_Age << endl;
}

void test01()
{
	Person<string, int>p("j", 18);
}

int main()
{

	test01();





	return 0;
}