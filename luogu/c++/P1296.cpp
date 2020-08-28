#include<iostream>
#include<algorithm>
#pragma GCC optimize(3)
using namespace std;

long long n,d,p[100000001],a = 0;

int main()
{
    std:: cin >> n >> d;
    for (long long i = 0; i < n; i++)
    {
        std:: cin >> p[i];
    }
    sort(p,p+n);
    for (long long i = 0; i < n-1; i++)
    {
        for (long long j = i+1; j < n; j++)
        {
            if (p[j] - p[i] <= d)
            {
                a++;
            }
            else
            {
                break;
            }
            
        }
    }
    std:: cout << a;
    return 0;
}