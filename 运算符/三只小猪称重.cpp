#include <iostream>
using namespace std;

int main() {

    //三只小猪称重，判断哪只最重
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    //输入重量
    cout << "请输入A体重" << endl;
    cin >> num1;

    cout << "请输入B体重" << endl;
    cin >> num2;

    cout << "请输入C体重" << endl;
    cin >> num3;

    //判断哪只最重
    //先判断AB
    if (num1 > num2) //A比B重
    {
        if (num1 > num3)
        {
            cout << "A最重" << endl;
        }
        else //C重
        {
            cout << "C最重" << endl;
        }
    }
    else //B比A重
    {
        if (num2 > num3)//B比C重
        {
            cout << "B最重" << endl;
        }
        else  //C比B重
        {
            cout << "C最重" << endl;
        }
    }

    system("pause");
    return 0;
}
