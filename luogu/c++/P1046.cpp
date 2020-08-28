#include<iostream>
using namespace std;
int main()
{
    int a[15],b,c=0;
    for (int i = 0; i < 10; i++)
    {
        std:: cin >> a[i];
    }
    std:: cin >> b;
    for (int j = 0; j < 10; j++)
    {
        if (b >= a[j] || b + 30 >= a[j])
        {
            c++;
        }
        
    }
    std:: cout << c;
    return 0;
}