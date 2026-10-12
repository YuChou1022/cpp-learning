#include <iostream>
using namespace std;
#include<string>

//const的使用场景

struct student
{
	string name;
	int age;
	int score;

};

//将函数中的形参改为指针，可以减少内存空间,而且不会复制出新的副本出来
void printStudent(const student* s);
{
	//加入const一旦修改就会报错，可以防止误操作
	cout << "姓名" << s->name << "年龄" << s->age << "分数" << s->score << endl;
}
int main()
{

	//创建结构体变量
	struct student s = { "张三" ,15,70 };

	//通过函数打印结构体变量信息
	printStudent(&s);




	system("pause");
	return 0;
}