#include<iostream>
using namespace std;
#include<string>
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;

	virtual ~Animal()
	{
		cout << "Animal析构函数" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数" << endl;
		new string(name);
	}

	virtual void speak()
	{
		cout <<*m_Name<< "小猫在说话" << endl;
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
		cout << "析构函数" << endl;
	}

	string *m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时候 不会调用子类析构函数 导致子类如果有堆区数据会内存泄露
	delete animal;
}


int main()
{

	test01();




	return 0;
}