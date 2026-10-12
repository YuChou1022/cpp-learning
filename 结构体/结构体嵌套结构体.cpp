#include<iostream>
using namespace std;
#include<string>

//定义学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

//定义老师结构体
struct teacher
{
	int id;//教室编号
	string name;//教师姓名
	int age;//年龄
	struct student stu;//辅导的学生

};
int main()
{

	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;



	system("pause");
	return 0;
}