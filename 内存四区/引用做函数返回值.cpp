#include<iostream>
using namespace std;

//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;//保存在栈区
	return a;
}
//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区上数据在程序结束后系统释放
	return a;
}




int main()
{

	int& ref = test01();

	cout << ref << endl;//第一次结果正确，因为编译器做了保留
	cout << ref << endl;//第二次错误因为a内存已经释放

	int& ref2 = test02();
	cout << ref2 << endl;
	cout << ref2 << endl;
	test02() = 1000;
	cout << ref2 << endl;
	cout << ref2 << endl;

	system("pause");
	return 0;
}