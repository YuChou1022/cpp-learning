#include<iostream>
using namespace std;
#include<iostream>

//成员属性设置私有
//1.可以自己控制读写权限
//2.对于写可以检测数据有效性

//人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//获取年龄
	int getAge()
	{
		return m_Age;
	}

	//设置偶像
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;//可读可写

	int m_Age=18;//只读

	string m_Idol;//偶像，只写
};
int main()
{

	Person p;
	//姓名设置
	p.setName("张三");
	cout << p.getName() << endl;

	//年龄设置
	p.getAge();
	cout << p.getAge() << endl;//只读不写

	//偶像设置
	p.setIdol("小明");




	return 0;
}