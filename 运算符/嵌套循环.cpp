#include <iostream>
using namespace std;

int main() {

    //利用嵌套循环打印星图
    
    //打印一行星图
    for (int i = 0;i < 10;i++)//外层循环
    {
        for (int j = 0;j < 10;j++)//内层循环
        {
            cout << "* ";
        }
        cout << endl;
    }


        system("pause");
        return 0;
    }

    
   