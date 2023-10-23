
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
const int p = 1e6;
vector<ll>v1(p+1),v2(p+1),inv(p+1);


// ll bin(ll a, ll b, ll m) {
//     a %= m;
//     ll ans = 1;
//     while (b > 0) {
//         if (b & 1) {
//             ans = (ans * a) % m;
//         }
//         b >>= 1;
//         a = (a * a) % m;
//     }
//     return ans;
// }

int main() {
    inv[1]=1;
    for(int i=2;i<=p;i++)
    {
        inv[i] = mod-mod/i*inv[mod%i]%mod;
    }
    v1[0]=1;
    v2[0]=1;
    for(int i=1;i<=p;i++)
    {
        v1[i]=v1[i-1]*i%mod;
        v2[i]=v2[i-1]*inv[i]%mod;
    }

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << v1[a]*v2[b]%mod*v2[a - b]%mod << endl;
        // cout << k << endl;
    }

    return 0;
}






