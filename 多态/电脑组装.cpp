#include<iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象计算函数
	virtual void calculate() = 0;
};
//抽象显卡类
class VideoCard
{
public:
	//抽象计算函数
	virtual void display() = 0;
};
//抽象内存条
class Memory
{
public:
	//抽象计算函数
	virtual void storagy() = 0;
};
//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	 

	//工作函数
	void work()
	{
		m_cpu->calculate();

		m_vc->display();

		m_mem->storagy();
	}

	//提供析构函数 释放3个零件
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:

	CPU* m_cpu;//CPU零件指针
	VideoCard* m_vc;//显卡零件指针
	Memory* m_mem;//内存条零件指针
};

//具体厂商
class InterCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了！" << endl;
	}
};

class InterVideoCPU : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};

class InterMemory :public Memory
{
	public:
	virtual void storagy()
	{
		cout << "Intel内存条开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU* intelCpu = new InterCPU;
	VideoCard* intelCard = new InterVideoCPU;
	Memory* intelMem = new InterMemory;

	//创建第二台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
}

int main()
{
	test01();






	return 0;
}