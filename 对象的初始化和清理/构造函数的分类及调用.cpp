#include<iostream>
using namespace std;

//构造函数的分类及调用
//分类
//按照参数分类  无参构造和有参构造
//按照类型进行分类  普通构造  拷贝构造
class Person
{
public:

	//构造函数
	Person()
	{
		cout << "person无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造" << endl;
	}

	~Person()
	{
		
		cout << "person析构函数" << endl;
	}
	int age;

	//拷贝构造函数
	Person(const Person& p)
	{
		//传入人身上所有属性拷贝过来
		age = p.age;
	}
};
//调用
void test01()
{
	//括号法
	//Person p;//默认构造函数调用
	//Person p2(10);//有参调用
	//Person p3(p2);//拷贝构造函数
	//注意事项
	//调用默认构造函数时不要加（）
	//加了（）编译器会认为是函数声明
	//cout << p2.age << endl;
	//cout << p3.age << endl;
	//显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造

	//Person(10);//匿名对象  特点：当前行结束后系统快速回收匿名对象
	//cout << "aaaa" << endl;
	// 
	// //不要利用拷贝构造函数来初始化匿名对象
	//Person(p3);
	// 
	// 
	//隐式转换法
	Person p4 = 10;//相当于写了Person p4=Person(10) 有参构造
	Person p5 = p4;//拷贝构造
}
int main()
{
	test01();




	return 0;
}