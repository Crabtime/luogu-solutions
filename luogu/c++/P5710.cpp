#include<iostream>
using namespace std;

int main()
{
    int a,b = 0,c = 0;
    std:: cin >> a;
    if(a%2 == 0)
    {
        b = 1;
    }
    if(a > 4 && a <= 12)
    {
        c = 1;
    }
    if (b == 1 && c == 1)
    {
        std:: cout << 1 << ' ';
    }
    else
    {
        std:: cout << 0 << ' ';
    }
    if(b == 1 || c == 1)
    {
        std:: cout << 1 << ' ';
    }
    else
    {
        std:: cout << 0 << ' ';
    }
    if ((b == 1 && c == 1) || (b == 0 && c == 0))
    {
        std:: cout << 0 << ' ';
    }
    else
    {
        std:: cout << 1 << ' ';
    }
    if(b == 0 && c == 0)
    {
        std:: cout << 1 << ' ';
    }
    else
    {
        std:: cout << 0 << ' ';
    }
    return 0;
}