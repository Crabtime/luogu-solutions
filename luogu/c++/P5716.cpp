#include<iostream>
using namespace std;

int main()
{
    int a,b;
    std:: cin >> a >> b;
    if ((a%4 == 0 && a%100 != 0)||a%400 == 0)
    {
        if (b == 2)
        {
            std:: cout << 29;
        }
        else if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
        {
            std:: cout << 31;
        }
        else
        {
            std:: cout << 30;
        }
    }
    else
    {
        if (b == 2)
        {
            std:: cout << 28;
        }
        else if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
        {
            std:: cout << 31;
        }
        else
        {
            std:: cout << 30;
        }
    }
    return 0;
}