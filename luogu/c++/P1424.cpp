#include<iostream>
using namespace std;

int main()
{
    int x,b = 0;
    long long n,a;
    std:: cin >> x >> n;
    if(x == 6)
    {
        n -= 2;
    }
    else if(x == 7)
    {
        n -= 1;
    }
    else
    {
        n -= 8 - x;
        b = 6 - x;
    }
    if (n % 7 == 6)
    {
        n -= 1;
    }
    else if (n % 7 == 0)
    {
        n -= 2;
    }
    a = n / 7 * 5 * 250 + 250 * (n % 7) + b * 250;
    std:: cout << a;
    return 0;
}