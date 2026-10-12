#include<iostream>
using namespace std;

int* func()
{
	//在堆区创建整形数据
	//new返回的是该数据类型指针
	int* p=new int(10);
	return p;
}

//new的基本语法
void test01()
{
	int* p = func();
	cout << &p << endl;
	//堆区数据由程序猿管理开辟，管理释放
	//释放使用关键字delete
	delete p;
}

//2.在堆区利用new开辟数组
void test02()
{
	//创建10整型数据的数组，在堆区
	int* arr=new int[10];

	for (int i = 0;i < 10;i++)
	{
		arr[i] = i + 100;//10个元素赋值
	}
	for (int i = 0;i < 10;i ++ )
	{
		cout << arr[i] << endl;
	}
}
//释放堆区数组
//释放数组时要加【】
delete[] arr;



int main()
{

	test02();



	system("pause");
	return 0;
}