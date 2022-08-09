#include <iostream>
#include <math.h>
#include <set>

using namespace std;
typedef long long ll;

ll main()
{
    ll t;cin >> t;
    while(t--)
    {
        string s;cin >>s;
        ll i = 0;
        ll x = 0;
        ll day = 1;
        set<char>see;
        set<char>::iterator it;

        while(s[i])
        {
            it = see.find(s[i]);
            if(it == see.end())
            {
                if(x == 3)
                {
                    x=0;
                    day++;
                    see.clear();
                }
                see.insert(s[i]);
                x++;
            }

            // cout <<"in i="<<i<<" ->" <<x << " " << day <<endl;
            i++;
        } 
        cout << day << endl; 
    }
}