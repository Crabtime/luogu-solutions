#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c,p,d;
    std:: cin >> a >> b >> c;
    p = (a + b + c) / 2;
    d = p * (p - a) * (p - b) * (p - c);
    cout.setf(ios::fixed);
    std:: cout << fixed << setprecision(1) << pow(d,1.0 / 2);
    return 0;
}