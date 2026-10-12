#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局变量，全局常量
const int c_g_a = 10;

int main()
{

	//全局区

	//全局变量，静态变量，常量

	//创建一个普通局部变量(写在函数体内部的变量)
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	//静态变量
	static int s_a = 10;//普通变量前面加static属于静态变量
	static int s_b = 10;

	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;

	//const修饰变量
	//const修饰的全局变量，const修饰的局部变量

	cout << "全局常量 c_g_a的地址为：" << (int)&c_g_a << endl;


	system("pause");
	return 0;
}