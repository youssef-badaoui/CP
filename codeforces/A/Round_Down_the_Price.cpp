#include <iostream>
#include <math.h>

using namespace std;
typedef long long ll;

ll main()
{
	ll t;cin >> t;
	while(t--)
	{
		string  m;cin >> m;
		ll len = m.size();
		ll res = stoll(m);
		res = res - pow(10, len-1);
		cout << res << endl;
	}
}

