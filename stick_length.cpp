#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    ll cost =0;
    for(int i=0;i<n;i++)
    {
        cost += abs(a[i]-a[n/2]);
    }
    cout << cost << endl;
    
}