    #include <iostream>
    #include <algorithm>
    using namespace std;
    int main()
    {
    	long long t;
    	cin >> t;
    	while(t--)
    	{
    		long long n;cin >> n;
    		string s;cin >> s;
    		sort(s.begin(),s.end());
    		long long i = 1;
    		long long res = 1;
    		while(s[i])	
    		{
    			if(s[i]!=s[i-1])
    			res++;
    			i++;
    		}
    		n -= res;
     
    		cout << res*2 + n << endl;
    	}
    }