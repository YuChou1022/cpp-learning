#include<iostream>
using namespace std;
#include<string>

//结构体数组
//1.定义结构体
struct student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};

//2.创建结构体数组

//3.给结构体数组中的元素赋值

//4.遍历结构体数组


int main()
{

	//2.
	struct student stuArr[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};

	//3.
	stuArr[2].name = "赵六";
	stuArr[2].age = 80;
	stuArr[2].score = 60;

	//4.
	for (int i = 0;i < 3;i++)
	{
		cout << "姓名" << stuArr[i].name << "年龄" << stuArr[i].age << "分数" << stuArr[i].score << endl;
	}



	system("pause");
	return 0;
}