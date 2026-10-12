#include <iostream>
using namespace std;

int main() {
    //1.打印所有三位数字

    int num = 100;
    do
    {
        //2.找到所有水仙花数字
        int a = 0;//个位
        int b = 0;//十位
        int c = 0;//百位

        a = num % 10;  //获取各位数
        b = num / 10 %10;  //获取十位
        c = num / 100; //获取百
            
        if (a * a * a + b * b * b + c * c * c == num)//如果水仙花
        {
            cout << num << endl;
        
        }
        num++;

       
    } while (num < 1000);





    system("pause");
    return 0;
}
