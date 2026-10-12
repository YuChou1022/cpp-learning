#include<iostream>
using namespace std;
//常用常量定义方式
//1.#define宏常量
//2，const修饰的变量

//1.#define宏常量
#define Day 7

int main() {
	
	cout << "一周总共有：" << Day << "天" << endl;

	//2.const修饰的变量
	const int month = 12;//const修饰变量也成为常量
	cout << "一年总共有:" << month << " 个月份" << endl;


	system("pause");
	return 0;
}
