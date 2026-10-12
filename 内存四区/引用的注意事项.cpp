#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int& b = a;

	//1.引用必须初始化

	//2.引用在初始化过后不可以改变
	int c = 20;

	b = c;//赋值操作，而不是引用更改

	cout <<  a << endl;
	cout << b << endl;
	cout << c << endl;//都赋值为20



	system("pause");
	return 0;
}