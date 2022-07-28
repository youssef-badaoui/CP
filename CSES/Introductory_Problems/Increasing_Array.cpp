#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long n;cin  >>n;
    long x = 0;
    long r = 0;
    long p = 0;
    while(n--)
    {
        cin >> x;
        if(p && p>x)
            r+=(p-x);
        p = max(x,p);
    }
    cout << r;
}