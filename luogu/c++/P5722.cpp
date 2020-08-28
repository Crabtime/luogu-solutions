#include<iostream>
using namespace std;

int main()
{
    int a,b;
    std:: cin >> a;
    for (int i = a; i >= 1; i--)
    {
        b += i;
    }
    std:: cout << b;
    return 0;
}