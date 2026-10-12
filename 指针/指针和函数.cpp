#include<iostream>
using namespace std;

//实现数字交换
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

void swap02(int* p1, int* p2)   //*解引用，改变了实参内容
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{

	//指针和函数
	//1.值传递

	int a = 10;
	int b = 20;
	//swap01(a,b);

	swap02(&a, &b);  //地址传递
	//&使实参传递地址，但是仍然只是复制，不会改变本身值


	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//值传递只是将实参传给形参，实参本身并不改变
	
	//2.地址传递
	//地址传递可以修饰实参





	system("pause");
	return 0;
}