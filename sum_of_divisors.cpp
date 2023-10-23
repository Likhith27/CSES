#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define ui unsigned int
const int mod = 1e9+7;
ll sum(ll n)
{
    ll a,b;
    if(n&1)
    {
        a = n;
        b = (n+1)/2;
    }
    else
    {
        a = n/2;
        b = (n+1);
    }
    return ((a%mod)*(b%mod))%mod;
}
int main()
{   
    ll n;
    cin >> n;
    
    ll s=0;
    for(ll i=1;i*i<=n;i++)
    {
        ll count = (n/i)-i+1;
        s += (count%mod)*i;
        s %= mod;
        s += sum(n/i)-sum(i);
        s += mod;
        s %= mod;
    }
    
    cout << s << endl;
}