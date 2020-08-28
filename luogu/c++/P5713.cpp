#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int n;
long long a,b;

void input()
{
    std:: cin >> n;
}

void core()
{
    a = 5 * n;
    b = 11 + 3 * n ;
}

void output()
{
    if(a < b)
    {
        std:: cout << 'L' << 'o' << 'c' << 'a'<<'l';
    }
    else
    {
        std:: cout << 'L' << 'u' << 'o' << 'g' << 'u';
    }
}

int main()
{
    input();
    core();
    output();
    return 0;
}