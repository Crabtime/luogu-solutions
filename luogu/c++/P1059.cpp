#include<iostream>
#include<cstdio>
#include<algorithm>
#pragma GCC optimize(1)
using namespace std;

int main()
{
    int n,a[105],b,d[105],k=0;
    std:: cin >> n;
    for (int i = 0; i < n; i++)
    {
        std:: cin >> a[i];
    }
    sort(a,a+n);
    for (int j = 0; j <= n; j++)
    {
        if(a[j]!=a[j+1])
        {
            d[k] = a[j];
            k++;
        }
    }
    b=k-1;
    std:: cout << b << endl;
    for (int c = 0; c < b; c++)
    {
        std:: cout << d[c] << ' '; 
    }
    
    return 0;
}