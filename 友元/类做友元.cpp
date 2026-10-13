#include<iostream>
using namespace std;
#include<string>

//类做友元

class Buiding; // 前向声明

class GoodGay
{
public:

	GoodGay();

	void visit();//参观函数，访问Buiding中的属性

	Buiding* buiding;
};

class Buiding
{
	//GoodGay是本类好朋友可以访问私有成员
	friend class GoodGay;
public:
	string m_SettingRoom;//客厅

	Buiding* buiding;

	Buiding();

private:

	string m_BedRoom;//卧室
};

//类外写成员函数
Buiding::Buiding()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	//创建建筑物对象
	buiding = new Buiding;
}

void GoodGay::visit()
{
	cout << "男朋友正在访问" << buiding->m_SettingRoom << endl;

	cout << "男朋友正在访问" << buiding->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{


	test01();


	return 0;
}