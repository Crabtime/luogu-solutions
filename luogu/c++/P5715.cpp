#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    std:: cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            if(a > b)
            {
                swap(a,b);
            }
            if(b > c)
            {
                swap(b,c);
            }
            if(a <= b && b <= c)
            {
                break;
            }
        }
        if(a <= b && b <= c)
        {
            break;
        }
    }
    std:: cout << a << ' ' << b << ' ' << c;
    return 0;
}