#include<iostream>
using namespace std;
#include<string>

template<class T1,class T2>
class Person
{
public:

	Person(T1 name, T2 age);
	/*{
		this->m_Name = name;
		this->m_Age = age;
	}*/

	void showPerson();
	//{
	//	cout << this->m_Name << this->age << endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

//构造函数类外实现
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name;
	this->m_Age;
}



int main()
{









	return 0;
}