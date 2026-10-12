#include <iostream>
using namespace std;

int main() {
    //选择结构 单行if语句
    //用户输入分数，如果大于600，视为考上大学，输出

    //1.用户输入分数
    int score = 0;
    cout <<"请输入一个分数：" << endl;
    cin >> score;
    
    //2.打印用户输入分数
    cout << "你的分数为：" << score << endl;

    //3.判断分数是否大于600，如果大于就输出
    if (score > 600)
    {
        cout << "恭喜你考上大学" << endl;
    }


    
    return 0;
}
