#include<iostream>
using namespace std;
#include<string>

//设计一个圆类，求圆周长
//圆求周长公式： 2*PI*半径

const double PI = 3.14;
//class代表设计一个类，类后面紧跟类名称
class Circle
{
	//访问权限
	//公共权限
public:

	//类中属性和行为都成为成员
	//属性   成员属性 成员变量
	//行为   成员函数 成员方法

	//属性
	int m_r;
	

	//行为
	//获取圆周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

//设计学生类
class Student
{
public:
	//属性
	string m_name;
	int m_id;
	//行为
	//显示函数
	void ShowStudent()
	{
		cout << m_name << m_id << endl;
	}
};

int main()
{

	//通过圆类创建具体圆（对象）
	//实例化  通过一个类，创建一个对象的过程
	Circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 10;

	cout << "周长为：" << c1.calculateZC() << "喵~" << endl;

	//创建具体学生  实例化对象
	Student s1;
	s1.m_name = "喵喵";
	s1.m_id = 21;

	s1.ShowStudent();

	Student s2;
	s2.m_name = "miao";
	s2.m_id = 33;




	system("pause");
	return 0;
}