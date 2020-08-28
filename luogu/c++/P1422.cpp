#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    double b;
    std:: cin >> a;
    if (a<=150)
    {
        b = 0.4463 * a;
    }
    else if (a>=151 && a<=400)
    {
        b = 0.4663 * (a-150) + 150 * 0.4463;
    }
    else if (a>400)
    {
        b = 0.5663 * (a-400) + 150 * 0.4463 + 250 * 0.4663;
    }
    cout.setf(ios::fixed);
    std:: cout << fixed << setprecision(1) << b;
    return 0;
}