#include<iostream>
using namespace std;
#include<string>

//建筑物类
class Buiding
{
	//goodGay全局函数是Buiding类好朋友，可以访问
	friend void goodGay(Buiding* buiding);
public:

	Buiding()
	{
		m_SettingRoom = "客厅";
		m_BedRoom = "卧室";

	}

	string m_SettingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

//全局函数
void goodGay(Buiding* buiding)
{
	cout << "男朋友的全局函数正在访问" << buiding->m_SettingRoom << endl;

	cout << "男朋友全局函数正在访问" << buiding->m_BedRoom << endl;
}

void test01()
{
	Buiding buiding;
	goodGay(&buiding);
}
int main()
{

	test01();






	return 0;
}