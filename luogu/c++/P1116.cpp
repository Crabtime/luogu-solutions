#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int n,k=0;
    std:: cin >> n;
    int a[10005];
    for(int i=0;i<n;i++)
    {
        std:: cin >> a[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int b=0;b<n;b++)
        {
            if(a[b]>a[b+1])
            {
                swap(a[b],a[b+1]);
                k++;
            }
        }
    }
    std:: cout << k;
    return 0;
}