#include<iostream>
using namespace std;
int main() {

	int arr[5] = { 300,350,200,400,250 };//小猪体重
	int max = 0;//记录最大体重

	//遍历数组，依次比较
	for (int i = 0;i <5;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	cout << "最重小猪体重是：" << max << "斤"<< endl;



	system("pause");
	return 0;
}