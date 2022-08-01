#include <iostream>
#include <unistd.h>

using namespace std;
// in this code i just count the different between the bad time and all alarms than print the minimm
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long H,M;
        long long n, t, v;
        cin >> n >> t >> v;
        long res = 100000;
        long i = 0;
        while(n--)
        {
            long h, m;
            cin >> h; cin >> m;
            i = 0;
            H = t;
            M = v;
            while(h!=H || m!=M)
            {
                M++;
                if(M == 60)
                {
                    M = 0;
                    H++;
                }
                if(H == 24)
                    H = 0;
                i++;
            }
            if(i < res)
                res = i;
            i = 0;
        }
        cout << res/60<<" " <<res%60<<endl;
    }
}