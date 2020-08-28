#include<iostream>
using namespace std;

int main()
{
    long i,res = 0;
    char f;
    std:: cin >> i;
    res += i;
    while(std:: cin >> f >> i)
    {
        if(f == '+')
        {
            res += i;
        }
        if(f == '-')
        {
            res -= i;
        }
    }
    std:: cout << res;
    return 0;
}