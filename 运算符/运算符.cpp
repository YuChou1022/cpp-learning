#include<iostream>
using namespace std;

int main() {
	//加减乘除运算
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除结果依然是整数，小数部分去除

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;//小数部分一样去掉

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl;除数不能为0

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;//结果可以是小数

	//取模运算本质是取余数
	int a = 10;
	int b = 3;
	cout << a % b << endl;

	//两个小数是不可以做取模运算的
	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;

	system("pause");
	return 0;
}
