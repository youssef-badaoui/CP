#include <iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    while(n != 1)
    {
        cout<<n<<" ";
        n%2?n=n*3+1:n/=2;
    }
        cout<<n;
}