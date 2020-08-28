#include<iostream>
#pragma GCC optimize(3)
using namespace std;

int main()
{
    int n,a[105],b[105],c = 0;
    std:: cin >> n;
    for (int i = 0; i < n; i++)
    {
        std:: cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (a[i]>a[j])
            {
                c++;
            }
        }
        b[i] = c;
        c = 0;
    }
    for (int i = 0; i < n; i++)
    {
        std:: cout << b[i] << ' ';
    }
    return 0;
}