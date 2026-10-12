#include <iostream>
using namespace std;

int main() {
    //选择结构 多行if语句
    //输入考试分数 大于600输出考上大学
    //没考上就打印没考上

    //1.输入考试分数
    int score = 0;
    cout << "请输入一个考试分数：" << endl;
    cin >> score;

    //2.提示用户输入分数
    cout << "分数为：" << score << endl;

    //3.判断 如果大于600打印考上大学
    if (score > 600)
    {
        cout << "恭喜考上大学" << endl;

    }
    else
    {
        cout << "为考上大学" << endl;
    }



    system("pause");
    return 0;
}
