#include<iostream>
using namespace std;
#include<string>

//定义学生结构体
struct student
{
	string name;//姓名
	int age = 0;//年龄
	int score = 0;//分数
};

//打印学生信息函数
//值传递

void printStudent1(struct student temp)
{
	temp.age = 100;
	cout << "子函数中 姓名:" << temp.name << "年龄" << temp.age << "分数" << temp.score << endl;
}

//地址传递
void printStudent2(struct student* p)
{
	p->age = 200;
	cout << "子函数2中 姓名 " << p->name << "年龄" << p->age << "分数" << p->score << endl;
}
int main()
{

	//结构体作函数参数
	
	//将学生传入到一个参数中，打印学生身上所有信息

	//创建结构体变量
	student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);
	system("pause");
	return 0;
}