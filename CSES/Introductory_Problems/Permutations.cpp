#include <iostream>
using namespace std;
int main()
{
    long long n;cin >>n;
    long i = 0;
    if(n < 4 && n > 1) {cout << "NO SOLUTION";return 0;}
    if(n == 4) {cout << "2 4 1 3";return 0;}
    while(i++ < n)
        if(i%2)
            cout << i << " ";
    i = 0;
    while(i++ < n)
        if(!(i%2))
            cout << i << " ";
}