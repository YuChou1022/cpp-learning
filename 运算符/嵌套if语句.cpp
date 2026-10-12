#include <iostream>
using namespace std;

int main() {
    //1.提示输入高考分数
    int score = 0;
    cout << "输入分数" << endl;
    cin >> score;
    //2.显示高考分数
    cout << "分数为" << score << endl;
    //3.判断
    //如果大于600一本
        //如果大于700北大
        // 大于650 清华
        // 其余 人大
    //如果大于500二本
    //如果大于400三本
    //其余情况，未考上本科
    if (score > 600)
    {
        cout << "恭喜考上一本" << endl;
        if (score > 700)
        {
            cout << "考入北大" << endl;
        }
        else if (score > 650)
        {
            cout << "考上清华" << endl;
        }
        else
        {
            cout << "考上人大" << endl;
        }
    }
    else if (score>500)
    {
        cout << "恭喜考上二本" << endl;
    }
    else if (score > 400)
    {
        cout << "恭喜考上三本" << endl;
    }
    else
    {
        cout << "没考上，再接再厉" << endl;
    }

    system("pause");
    return 0;
}
