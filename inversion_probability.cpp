#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            ll k;
            if(a[j]<=a[i])
            {
                k=(a[j]*(a[j]-1))/2;
            }
            else
            {
                k=(a[i]*(a[i]-1))/2 + (a[j]-a[i])*a[i];
            }
            ans+=(double)k/(double)(a[j]*a[i]);
        }
    }
    cout<<fixed<<setprecision(6)<<ans;
}