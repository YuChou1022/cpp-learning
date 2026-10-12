#include<iostream>
using namespace std;

//标识符命名规则
//1.不可以是关键字
//2.标识符是由字母数字下划线构成
//3.标识符第一个字符只能是字母或下划线，不能是数字
//4.标识符区分大小写
int main() {
	//1.
	//int int = 10;

	//2.
	int abc = 10;
	int ok_123abc = 30;

	//3.
	//int 123abc = 40

	//4.
	int aaa = 100;
	//cout << "aaa=" << AAA << endl;   //AAA aaa 不一样

	//做到见名知意
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;


	system("pause");
	return 0;
}
