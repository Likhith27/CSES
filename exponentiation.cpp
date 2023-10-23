#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int n =1e9+7;
int bin(int a,int b,ll m)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans = (ans*1LL*a)%n;
        }
        a = (1LL*a*a)%n;
        b>>=1;
    }
    return ans;
    // ll res = bin(a,b/2,n);
    // if(b&1)
    // {
    //     return a*(res*res)%n;
    // }
    // else
    // {
    //     return res*res;
    // }
}
int main()
{
    int t;
    cin >>  t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        cout << bin(a,b,n)<<endl;;
    }
    
}