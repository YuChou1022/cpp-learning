#include<iostream>
using namespace std;

class C1
{
	int m_A;//默认权限是私有
};

struct C2
{
	int m_A;//默认权限是公共
};
int main()
{

	//区别
	//struct默认权限是public
	//class默认权限是private
	C1 c1;
	//c1.m_A = 100;  类外不可以访问

	C2 c2;
	c2.m_A = 100;//公共权限可以访问



	return 0;
}