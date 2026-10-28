#include<iostream>
using namespace std;
#include<string>

template<class NameType,class Agetype>
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name;
		this - < Age;
	}

	void showPerson()
	{
		cout << this->m_Name << this->m_Age << endl;
	}

	NageType m_Name;
	AgeType m_Age;
};

void test01()
{
	Person<string, int> p1("孙悟空",999);
	p1.showPerson();
}


int mian()
{












	return 0;
}