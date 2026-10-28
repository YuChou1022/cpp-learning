#include<iostream>
using namespace std;

//实现通用 对数组进行排序函数
//规则 从大到小
//算法 选择
//测试char 数组 int 数组

//交换函数模板
template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int maxIndex = i;//认定下标最大值
		for (int j = i + 1; j < len; j++)
		{
			//认定最大值比遍历出数值要小，说明j下标才是真正最大值
			if (arr[maxIndex] < arr[j])
			{
				maxIndex = j;//更新最大值下标
			}
		}
		if (maxIndex != i)
		{
			//交换maxIndex和i元素
			mySwap(arr[maxIndex], arr[i]);
		}
	}
}

//打印数组模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "badcfe";//字符串末尾还有一个不可见的 '\0'
	//减去 '\0'，否则空字符也会被当成最小元素参与排序
	int num = sizeof(charArr) / sizeof(charArr[0]) - 1;
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02()
{
	//测试int数组
	int intArr[] = { 3, 7, 1, 9, 5, 2 };
	int num = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main()
{

	test01();
	test02();

	return 0;
}
