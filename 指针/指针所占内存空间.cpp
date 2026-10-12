#include<iostream>
using namespace std;

int main()
{

	//指针所占内存空间大小
	int a = 10;
	int* p = &a;

	cout << "sizeof(int *)=" << sizeof(p) << endl;
	//在32位操作系统下，指针是占4个字节空间大小，不管什么数据类型
	//在64位操作系统下，指针占8个空间大小


	system("pause");
	return 0;
}