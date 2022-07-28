#include <iostream>

using namespace std;;
int main()
{
    string s;cin >> s;
    long  i = 1;
    long  rep = 1;
    long  mx = 0;
    while(s[i])
    {
        if(s[i]==s[i-1])
            rep++;
        else
        {
            if(rep > mx)
                mx=rep;
            rep=1;
        }
        i++;
    }
    if(rep > mx)
        mx=rep;
    cout << mx;
}