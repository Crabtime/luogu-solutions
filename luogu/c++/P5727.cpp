#include<iostream>
#pragma GCC optimize(3)
using namespace std;

void bingbao(long long n)
{
    if (n == 1)
    {
        std:: cout << 1 << ' ';
        return;
    }
    if (n%2 == 0)
    {
        bingbao(n/2);
    }
    else
    {
        bingbao(n*3+1);
    }
    std:: cout << n << ' ';
}

int main()
{
    long long n;
    std:: cin >> n;
    bingbao(n);
    return 0;
}