#include<iostream>
using namespace std;

int main()
{
    int n,m,a;
    std:: cin >> n >> m;
    if(n%m == 0)
    {
        for (int i = 0; i < m; i++)
        {
            std:: cout << n/m << ' ';
        }
    }
    else
    {
        a = n%m;
        for (int i = 0; i < m - a; i++)
        {
            std:: cout << n/m << ' ';
        }
        for (int i = 0; i < a; i++)
        {
            std:: cout << n/m + 1 << ' ';
        }
    }
    return 0;
}