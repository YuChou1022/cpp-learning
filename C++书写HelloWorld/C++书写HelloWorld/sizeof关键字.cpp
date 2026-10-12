#include<iostream>
using namespace std;

int main() {

	//可以利用sizeof求出数据类型占用内存大小
	//语法：  sizeof(数据类型 /变量）

	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(short) << endl;//sizeof(里面放类型或者变量都可以)

	int num2 = 10;
	cout << "int占用内存空间为：" << sizeof(int) << endl;

	long num3 = 10;
	cout << "long占用空间为： << sizeof <<endl;"

	long long num4 = 10;
	cout << "long long占用空间为:" << sizeof(long long) << endl;

	//整型比较大小
	//short <int <= long<= long long

	system("pause");
	return 0;
}
