#include<iostream>
using namespace std;

long long jc(long long a)
{
    if(a == 1)
    {
        return 1;
    }
    return a * jc (a - 1);
}

int main()
{
    long long n;
    std:: cin >> n;
    std:: cout << jc(n);
    return 0;
}