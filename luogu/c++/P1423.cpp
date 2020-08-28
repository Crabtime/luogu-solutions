#include<iostream>
#include<math.h>
#pragma GCC optimize(3)
using namespace std;

int main()
{
    float x,b = 0,c=2;//b为已经游的距离，c为每次能游的距离，x为总路程
    int step = 0;//a为步数
    std:: cin >> x;
    while (b<x)
    {
        b += c;
        c *= 0.98;
        step++;
    }
    std:: cout << step;
    return 0;
}