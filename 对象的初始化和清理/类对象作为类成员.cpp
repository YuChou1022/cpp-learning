#include<iostream>
using namespace std;
#include<string>

//类对象作为类成员

//手机类
class Phone
{
public:
	
	Phone(string pName)
	{
		cout << "Phone构造函数调用" << endl;
		m_PName = pName;
	}

	~Phone()
	{
		cout << "这是Phone析构函数调用" << endl;
	}
	//手机品牌名称
	string m_PName;
};

class Person
{
public:

	//Phone m_Phone=pName  隐式转换法
	Person(string name, string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Person构造函数调用" << endl;
	}

	~Person()
	{
		cout << "这是Person析构函数调用" << endl;
	}

	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};

//当其他类对象作为本类成员，构造时候先构造对象，再构造自身
//析构顺序相反
void test01()
{
	Person p("张三", "小米18pro");

	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main()
{

	test01();




	return 0;
}