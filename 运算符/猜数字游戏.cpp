#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>

int main() {
    //添加随机数种子，作用利用当前系统时间生成随机数，防止每次都一样
    srand((unsigned int)time(NULL));

    //1.系统先生成随机数
    int num = rand() % 100 + 1; //生成0+1~99+1随机数
    cout << "请猜测数字" << endl;
    //2.玩家随机猜测
    int val = 0; //玩家输入数据
    
    while (1)
    {
        cin >> val;

        //3.判断玩家猜测
        if (val > num)
        {
            cout << "过大" << endl;
  
        }
        else if (val < num)
        {
            cout << "过小" << endl;
         
        }
        else
        {
            cout << "对了" << endl;
            break;//可以利用break退出循环
        }

        //猜对：退出游戏
        //猜错：提示过大过小 重新返回第二步
    }





    system("pause");
    return 0;
}
