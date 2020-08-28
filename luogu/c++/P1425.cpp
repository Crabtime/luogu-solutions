#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    std:: cin >> a >> b >> c >> d;
    if (d < b)
    {
        c -= 1;
        d += 60;
    }
    g = (c - a) * 60 + (d - b);
    e = g / 60;
    f = g % 60;
    std:: cout << e << ' ' << f;
    return 0;
}