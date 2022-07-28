#include<iostream>
#include <vector>
using namespace std;

int main()
{
    long n;
    long i;
    long x;
    long r = 0;
    cin >> n;
    x=n;
    while(--n)
    {
        cin >> i;
        r+=i;
    }
    i = (x*x+x)/2;
    cout << i-r;
}