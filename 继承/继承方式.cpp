#include<iostream>
using namespace std;

//继承方式

//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中公共权限成员 到子类依然是公共权限
		m_B = 10;//保护依然保护,类内可以访问
		//m_C = 10;//私有访问不到
	}
};

//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类公共成员子类变成保护权限
		m_B = 100;//父类保护在子类还是保护
		//m_C = 100;父类中私有成员子类访问不到
	}
};

class GrandSon2 :public Son2
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
	}
};

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//父类公共变为私有成员
		m_B = 100;//父类保护变为私有
		//m_C = 100;私有访问不到
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;私有了，儿子也访问不到
		//m_B=100;
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//到了son1中m_B保护权限，类外访问不到

}

void test02()
{
	Son2 s1;
	//s1.m_A = 100;//m_A变成保护权限。类外访问不到
	//s1.m_B = 100;//m_B也是保护权限
}

void test03()
{
	Son3 s1;
	/*s1.m_A = 100;
	s1.m_B = 100;*///变为私有成员，类外访问不到
}

int main()
{








	system("pause");
	return 0;
}