#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
long long w(long long i,long long j,long long k)
{
    if (i <= 0 || j <= 0 || k <= 0)
    {
        return 1;
    }
    else if (i > 20 || j > 20 || k > 20)
    {
        return w(20, 20, 20);
    }
    else if (i < j && j < k)
    {
        return w(i, j, k-1) + w(i, j - 1, k - 1) + w(i, j - 1, k);
    }
    else
    {
        return w(i - 1, j, k) + w(i - 1, j - 1, k) + w(i - 1, j, k - 1) - w(i - 1, j - 1, k - 1);
    }
}

int main()
{
    long long a,b,c;
    long long ans;
    while(1)
    {
        std:: cin >> a >> b >> c;
        if (a == -1)
        {
            if (b == -1)
            {
                if (c == -1)
                {
                    break;
                }
            }
        }
        ans = w(a, b, c);
        std:: cout << 'w' << '(' << a << ',' << ' ' << b << ',' << ' ' << c << ')' << ' ' << '=' << ' ' << ans << endl;
    }
    return 0;
}
