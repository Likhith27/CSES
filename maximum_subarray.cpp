#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll min = INT_MIN;
    ll m =0;
    for(int i=0;i<n;i++)
    {
        if(m+a[i]>=a[i])
            m += a[i];
        else
            m =a[i];
        min = max(min,m);
    }
    cout << min << endl;
    
}