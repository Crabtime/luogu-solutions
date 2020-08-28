#include<iostream>
#pragma GCC optimize(3)
using namespace std;

int main()
{
    long long n,m[60];
    char a,b,c;a='.';b='0';c='0';
    std:: cin >> n;
    m[0] = 0;m[1] = 1;m[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        m[i] = m[i-1] + m[i-2];
    }
    std:: cout << m[n];
    std:: cout << a << b << c;
    return 0;
}