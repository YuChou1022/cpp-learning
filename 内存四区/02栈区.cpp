#include<iostream>
using namespace std;

//栈区数据注意事项————不要返回局部变量的地址
//栈区数据由编译器管理开辟和释放
int*  func(int b)//形参数据也会放在栈区
{
	int a = 10;//局部变量,存放在栈区，栈区数据在函数执行完自动释放
	return &a;//返回局部变量地址

}


int main()
{

	int* p = func(1);

	//cout << *p << endl;//第一次可以打印正确数字因为编译器做了保留
	//cout << *p << endl;第二次不再保留


	system("pause");
	return 0;
}