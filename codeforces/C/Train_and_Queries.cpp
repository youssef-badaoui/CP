#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <iterator>

using namespace std;
typedef long long ll;

int main()
{
    ll t;cin >> t;
    while(t--)
    {
        ll n,k;cin >> n >> k;
        ll i = 0;
        ll x = 0;
        vector<ll>fv(n,n);
        vector<ll>lv(n,0);
        multimap<ll,ll>m;
        vector<ll>v(n);
        vector<ll>tv(n);
        /////////////////////////////////////////////////////////////////
        //        this part is for coordinates compression           ///
        /////////////////////////////////////////////////////////////////

        while(i < n)
        {
            cin >> v[i];
            tv[i] = v[i];
            i++;
        }
        sort(tv.begin(), tv.end());
        ll s = 0;
        ll e= n-1;
        ll mid;
        i = 0;
        while(i < n)
        {
            mid = (s+e)/2;
            if(v[i] == tv[mid] || v[i] == tv[s] || v[i] == tv[e])
            {
                if(v[i] == tv[mid])
                {
                    m.insert(pair<ll,ll>(v[i],mid));
                    v[i] = mid;
                }
                else if(v[i] == tv[s])
                {
                    m.insert(pair<ll,ll>(v[i],s));
                    v[i] = s;
                }
                else if(v[i] == tv[e])
                {
                    m.insert(pair<ll,ll>(v[i],e));
                    v[i] = e;
                }
    
                i++;
                s=0;
                e = n-1;
            }
            else if(v[i] > tv[mid])
                s = mid + 1;
            else if(v[i] < tv[mid])
                e = mid - 1;
        }
        // i = 0;
        // while(i < 8)
        // cout << v[i++] << " ";
        //   cout << endl;
    ///////////////////////////////////////////
        i = 0;
        while(i < n)
        {
            x = v[i];
            fv[x] = min(i, fv[x]);
            lv[x] = max(i, lv[x]);
            i++;
        }
        i = 0;
        while(i < k)
        {
            ll s,e;cin >> s >> e;
            map<ll,ll>::iterator sit = m.find(s);
            map<ll,ll>::iterator eit = m.find(e);
            s = sit->second;
            e = eit->second;
            if(sit == m.end() || eit == m.end())
                cout << "NO" << endl;
            else if(fv[s] < lv[e])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            i++;
        }
    }
}
