#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int b,p,k,s;
    char x,y,z,i;
    x = ' ';
    y = 'm';
    z = 'o';
    i = 'd';
    std:: cin >> b >> p >> k;
    s = pow(b,p);
    s = s % k;
    std:: cout << b << '^' << p << x << y << z << i << x << k << '=' << s;
    return 0;
}