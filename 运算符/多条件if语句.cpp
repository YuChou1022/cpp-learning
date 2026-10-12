#include <iostream>
using namespace std;

int main() {
    //选择结构 多条件if语句
    //输入一个考试分数，大于600视为考上一本，在屏幕输出
    //大于500输出考上二本
    //大于400输出考上三本
    //小于等于400视为未考上本科，在屏幕输出

    //1.用户输入分数
    int score = 0;
    cout << "请输入分数" << endl;
    cin >> score;

    //2.提示用户输入分数
    cout << "你的分数为：" << score << endl;

    //3.判断
    //如果大于600，考上一本
    //如果大于500，考上二本
    //如果大于400，考上三本
    //前三个都没满足，没考上本科
    if (score > 600)
    {
        cout << "恭喜考上一本" << endl;

    }
    else if (score > 500)
    {
        cout << "恭喜考上二本" << endl;
    }

    else if (score > 400)
    {
        cout << "恭喜考上三本" << endl;
    }
    else
    {
        cout << "未考上大学，再接再厉" << endl;
    }
    system("pause");
    return 0;
}
