#include<iostream>
using namespace std;

int main() {

	//数组

	//1.数据类型  数组名【数组长度】；

	int arr[5];
	//给数组元素赋值
	/*arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;*/

	//访问数据元素
	/*cout <<arr[0] << endl;*/
	//2.数据类型  数组名【数组长度】 = {值1，值2，...}
	//如果初始化数据时候，没有填写完，会用0来填补剩余数据
	/*int arr2[5] = { 10,20,30,40,50 };*/
	//	cout << arr2[0] << endl;
	// 利用循环 输出数组中元素
	/* for (int i = 0;i < 5;i++)
	{
		 cout << arr2[i] << endl;
	}*/
	//3.数据类型  数组名【】 ={值1，值2...}
	//定义数组时必须有初始长度
	int arr3[] = { 90,80,70,60,50,40,20,10 };
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << endl;
	}





	system("pause");
	return 0;
}
