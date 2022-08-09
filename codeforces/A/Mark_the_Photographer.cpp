//https://codeforces.com/problemset/problem/1705/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

ll main()
{
    long long  t,n,x,i;cin>>t;
    while(t--)
    {
        i = 0;
        cin >> n >> x;
        vector<long>v(n*2);
        while(i < n*2)
            cin >> v[i++];
        sort(v.begin(), v.end());
        i = 0;
        ll p = 0;
        while(i < n)
        {
            if(v[n+i] - v[i]< x)
            {
                cout <<"NO"<<endl;
                p = 1;
                break;
            }
            i++;
        }
        if(!p)
            cout << "YES" << endl;
    }
}