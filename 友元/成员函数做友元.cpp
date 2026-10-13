#include<iostream>
using namespace std;
#include<string>

class Buiding; // 前向声明

class GoodGay
{
public:

	GoodGay();

	void visit();  //让visit可以访问Buiding私有成员
	void visit2();//不可以访问

	Buiding* buiding;

};

class Buiding
{
	//告诉编译器GoodGay下visit函数作为本类好朋友，可以访问私有成员
	friend void GoodGay::visit();
public:

	Buiding();

	string m_SettingRoom;

private:
	string m_BedRoom;

};

//类外实现成员函数
Buiding::Buiding()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	buiding = new Buiding;
}

void GoodGay::visit()
{
	cout << buiding->m_SettingRoom << endl;
	cout << buiding->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << buiding->m_SettingRoom << endl;
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