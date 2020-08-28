#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double t;
    int n;
    std:: cin >> t >> n;
    cout.setf(ios::fixed);
    std:: cout << fixed << setprecision(3) << t/n << endl;
    std:: cout << n * 2;
    return 0;
}