#include<iostream>
using namespace std;

int main()
{
    int m,t,s;
    std:: cin >> m >> t >> s;
    if(t == 0 || s == 0)
    {
        std:: cout << 0;
    }
    else
    {
        if(s % t != 0)
        {
            if(m * t <= s)
            {
                std:: cout << 0;
            }
            else
            {
                std:: cout << m - s / t - 1;
            }
        }
        else
        {
            if(m * t <= s)
            {
                std:: cout << 0;
            }
            else
            {
                std:: cout << m - s / t;
            }
        }
    }
    return 0;
}