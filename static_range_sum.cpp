#include<bits/stdc++.h>
using namespace std;
#define ll long 
const int m = 2e5;
vector<ll>v(m+1);
int main()
{
    int n,q,a,b;
    cin >> n >> q;
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
        v[i]+=v[i-1];
    }
    while(q--)
    {
        cin >> a >> b;
        cout << v[b]-v[a-1] << endl;
    }
}