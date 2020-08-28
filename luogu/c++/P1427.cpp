#include<iostream>
using namespace std;

int main()
{
    int a[105],i = 0;
    while (std:: cin >> a[i] && a[i] != 0)
    {
        i++;
    }
    while (i--)
    {
        std:: cout << a[i] << ' ';
    }
    return 0;
}