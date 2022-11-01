#include <iostream>

using namespace std;

int main()
{
    long long t;cin >> t;
    while(t--)
    {
        long long res = 0;
        long long x,y; cin >> y >> x;

        if(x >= y)
        {
            if(x % 2)
                res = x * x - (y - 1);
            else
            {
                x--;
                res = (x * x + 1) + (y - 1);
            }
        }
        else
        {
            if(!(y%2))
                res = y * y - (x - 1);
            else
            {
                y--;
                res = (y * y + 1) + (x - 1);
            }
        }
        cout << res << endl;
    }
}