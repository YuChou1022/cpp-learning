#include <iostream>
using namespace std;

int main() {

    //continue语句用途
    for (int i = 0;i < 100;i++)
    {
        //奇数输出，偶数不输出
        if (i%2==0)
        {
            continue;   //可以筛选条件，到此不再向下执行，执行下一次循环
            //break会退出循环，continue不会
        }
        cout << i << endl;
    }




    system("pause");
    return 0;
}
