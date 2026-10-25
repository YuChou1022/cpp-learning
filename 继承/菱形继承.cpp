#include <iostream>
using namespace std;

//动物类

class Animal
{
public:
	int m_Age;
};

//利用虚继承解决菱形继承问题
// //在继承前+virtual
//Animal成为虚基类
//羊类
class Sheep :virtual public Animal
{

};

//驼类
class Tuo :virtual public Animal
{

};

//羊驼类
class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 19;
	st.Tuo::m_Age = 10;
	//菱形继承两个父类用于相同属性需要加相同作用域区分
	cout << "st.Sheep::m_Age" << st.Sheep::m_Age << endl;//10
	cout << "st.Tuo::m_Age" << st.Tuo::m_Age << endl;//10
	cout << st.m_Age << endl;

	//这份数据只需要一份，菱形继承导致数据有两份，资源浪费

}

int main()
{

	test01();









	return 0;
}