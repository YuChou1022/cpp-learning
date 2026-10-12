#include<iostream>
using namespace std;
#include<string>

//1.创建学生数据类型  ：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法  struct 类型名称{成员列表}
//定义结构体时struct不能省略
struct student
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;  //顺便创建结构体变量

//2.通过学生类型创建具体学生

//2.1struct student s1
//2.2struct student s2 = {......}
//2.3在定义结构体是顺便创建一个结构体变量
//创建结构体变量时struct可以省略
int main()
{

	//2.1
	struct student s1;
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;

	//2.2
	struct student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄:" << s2.age << "分数：" << s2.score << endl;

	//2.3
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;



	system("pause");
	return 0;
}