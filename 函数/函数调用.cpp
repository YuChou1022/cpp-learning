#include <iostream>
using namespace std;


	//定义加法函数
    //函数定义时num1 num2并没有真实数据
    //只是形式参数，简称实参
	int add (int num1,int num2)
	{
		int sum = num1 + num2;
		return sum;
	}

	int main()
	{
		//mian函数中调用add函数
		int a = 10;
		int b = 20;

		//函数调用语法：  函数名称 （参数）
		//a b称为实际参数，简称实参
		//调用函数时实参值会传给形参
		int c = add(a, b);
		cout << "c=" << c << endl;

		system("pause");
		return 0;
	}



