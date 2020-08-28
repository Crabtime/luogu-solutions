#include<iostream>
#include<iomanip>
#include<math.h>
// 填上你觉得需要的其他头文件
/*
*/
using namespace std;
int main() 
{
    int T;
    std:: cin >> T;
    if (T == 1) 
    {
        // 粘贴问题 1 的主函数代码，除了 return 0
        std:: cout << "I love Luogu!";
    } 
    else if (T == 2) 
    {
        // 粘贴问题 2 的主函数代码，除了 return 0
        std:: cout << 2 + 4 << " " << 10 - 2 - 4;
    } 
    else if (T == 3) 
    {
        // 请自行完成问题 3 的代码
        std:: cout << 14 / 4 << endl;
        std:: cout << 14 / 4 * 4 << endl;
        std:: cout << 14 % 4;
    } 
    else if (T == 4) 
    {
        // 请自行完成问题 4 的代码
        std:: cout << 166.666667;
    } 
    else if (T == 5) 
    {
        // 请自行完成问题 5 的代码
        std:: cout << (260 + 220) / (12 + 20);
    } 
    else if (T == 6) 
    {
        // 请自行完成问题 6 的代码
        std:: cout << sqrt(pow(6,2) + pow(9,2));
    } 
    else if (T == 7) 
    {
        // 请自行完成问题 7 的代码
        int a = 100;
        a += 10;
        std:: cout << a << endl;
        a -= 20;
        std:: cout << a << endl;
        a -= a;
        std:: cout << a << endl;
    } 
    else if (T == 8) 
    {
        // 请自行完成问题 8 的代码
        std:: cout << 2 * 5 * 3.141593 << endl;
        std:: cout << 5 * 5 * 3.141593 << endl;
        std:: cout << 4.0 / 3 * 5 * 5 * 5 * 3.141593 << endl;
    } 
    else if (T == 9) 
    {
        // 请自行完成问题 9 的代码
        std:: cout << 22;
    } 
    else if (T == 10) 
    {
        // 请自行完成问题 10 的代码
        std:: cout << 9;
    } 
    else if (T == 11) 
    {
        // 请自行完成问题 11 的代码
        std:: cout << 100.0 / (8 - 5);
    } 
    else if (T == 12) 
    {
        // 请自行完成问题 12 的代码
        std:: cout << 13 << endl;
        std:: cout << 'R' << endl;
    } 
    else if (T == 13) 
    {
        // 请自行完成问题 13 的代码
        std:: cout << 16;
    } 
    else if (T == 14) 
    {
        // 请自行完成问题 14 的代码
        for (int i = 1; i <= 110; i++)
        {
            int p = 120 - i;
            int res = i * p;
            if (res == 3500)
            {
                std:: cout << round(i);
                break;
            }
            
        }
    }
    return 0;
}