#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x;
    std:: cin >> x;
    if(x == 1 || x == 0)
    {
        std:: cout << 'T'<< 'o'<<'d'<<'a'<<'y'<<','<<' '<<'I'<<' '<<'a'<<'t'<<'e'<<' '<< x << ' '<<'a'<<'p'<<'p'<<'l'<<'e'<<'.';
    }
    else if(x >= 2)
    {
        std:: cout << 'T'<< 'o'<<'d'<<'a'<<'y'<<','<<' '<<'I'<<' '<<'a'<<'t'<<'e'<<' '<< x << ' '<<'a'<<'p'<<'p'<<'l'<<'e'<<'s'<<'.';
    }
    return 0;
}