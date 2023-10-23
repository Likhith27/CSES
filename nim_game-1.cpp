#include<bits/stdc++.h>
using namespace std;
#define ll long 
const int p = 2e5;
const ll mod = 1e9+7;
// vector<ll>v(m+1);

int bin(int a,int b,int m) {
    a %= m;
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = (1LL*ans * a) % m;
        }
        b >>= 1;
        a = (1LL*a * a) % m;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int k=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            k ^= a; 
        }
        cout << (k?"first":"second")<<endl;
    }
}