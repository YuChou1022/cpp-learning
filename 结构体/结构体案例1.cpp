#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//学生结构体定义
struct student
{
	string sname;
	int score;
	
};

//老师的结构体定义
struct Teacher
{
	string tname;
	struct student sArray[5];

};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE:";
	//给老师开始赋值
	for (int i = 0;i < len;i++)
	{
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];

		//通过循环给每名老师带的学生进行赋值
		for (int j = 0;j < 5;j++)
		{
			tArray[i].sArray[j].sname = "Student_";
			tArray[i].sArray[j].sname += nameSeed[j];

			int random = rand() % 61 + 40;//40~100
				tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << "老师姓名：" << tArray[i].tname << endl;

		for (int j = 0;j < 5;j++)
		{
			cout << "学生姓名：" << tArray[i].sArray[j].sname << "考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{

	//随机数种子
	srand((unsigned int)time(NULL));

	//创建三名老师数组
	struct Teacher tArray[3];

	//通过函数给三名老师信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//打印所有老师及所带学生信息
	printInfo(tArray, len);


	system("pause");
	return 0;
}