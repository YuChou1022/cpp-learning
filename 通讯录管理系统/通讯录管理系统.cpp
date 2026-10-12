#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存联系人数组
	struct Person personArray[MAX];


	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满，满了不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "添加成功" << endl;

		//性别
		cout << "请输入性别" << endl;
		cout << "1->男" << endl;
		cout << "0->女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "请重新输入" << endl;	
			}
		}
		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入联系电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}

//2.显示所有联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录是否为0，为0提示记录为空
	//如果不为0.显示联系人信息
	if (abs->m_Size == 0)\
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0;i < abs->m_Size;i++)
		{
			cout << "姓名" << abs->personArray[i].m_Name << "\t";
			cout << "性别" << abs->personArray[i].m_Sex << "\t";
			cout << "年龄" << abs->personArray[i].m_Age << "\t";
			cout << "电话" << abs->personArray[i].m_Phone << "\t";
			cout << "住址" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//按任意健继续
	system("cls");//清屏

}

//检查联系人是否存在，若存在，返回具体位置，不存在返回-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0;i < abs->m_Size;i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//找到了，返回数组编号
		}
		else
		{
			return -1;//如果遍历结束都没有找到，返回-1
		}
	}

}

//删除指定联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入要删除的联系人" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = ret;i < abs->m_Size;i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//4.查找指定联系人信息
void findPerson(Addressbooks* abs)
{
	cout << "请输入要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断指定联系人是否存在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//找到联系人
		{
			cout << "姓名:" << abs->personArray[ret].m_Name << "\t";
			cout << "年龄" << abs->personArray[ret].m_Age << "\t";
			cout << "性别" << abs->personArray[ret].m_Sex << "\t";
			cout << "电话" << abs->personArray[ret].m_Phone << "\t";
			cout << "住址" << abs->personArray[ret].m_Addr << endl;

		}
	}
	else
	{
		//为找到
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//5.修改指定联系人信息
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret != -1)//找到指定联系人
	{
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "请输入性别" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		while (true)
		{
			int sex = 0;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
			}
			else
			{
				cout << "输入有误，重新输入" << endl;
			}
		}

		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "请输入联系电话" << endl;
		string phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "请输入住址" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;

	}
	system("pause");
	system("cls");
}

//6.清空所有联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//将联系人置为0，做逻辑上的清空！！！
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");

}

//封装函数显示该界面，showMenu()
//在main函数中调用封装好的函数
//菜单界面
void showMenu()
{
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
}

int main()
{

	//创建通讯录结构体变量
	struct Addressbooks abs;
	//初始化通讯录当前人员个数
	abs.m_Size = 0;

	int select = 0;//创建用户选择输入的变量

	while (true)
	{
		//菜单调用
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);//地址传递修改实参
			break;
		case 2://2.显示联系人
			showPerson(&abs);
			break;
		case 3://3.删除联系人
			deletePerson(&abs);
			break;
		case 4://4.查找联系人
			findPerson(&abs);
			break;
		case 5://5.修改联系人
			modifyPerson(&abs);
			break;
		case 6://6.清空联系人
			break;
		case 0://0.退出通讯录
			cleanPerson(&abs);
			cout << "欢迎下次使用通讯录" << endl;
			system("pause");
			return 0;
		default:
			cout << "请输入0到6之间的数字" << endl;
		}
	}

}