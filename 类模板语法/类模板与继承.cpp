#include<iostream>
using namespace std;

template<class T>
class Base
{
	T m;

};

//class Son :public Base//错误，必须知道父类中数据类型
class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}
//如果想灵活指定父类t类型，子类也需要类变模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
	T1.obj;
};

void test02()
{
	Son2<int, char>S2;
}

int main()
{


	test01();
	test02();




	return 0;
}