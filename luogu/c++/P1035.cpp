#include<iostream>
using namespace std;
int main()
{
    int k,n;
    double a;
    std:: cin >> k;
    for (int i = 1; ; i++)
    {
        a = a + 1.0 / i;
        if (a > k)
        {
            n = i;
            break;
        }
        
    }
    std:: cout << n;
}