#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define m 1e9+7
int main() 
{
    ll n;
    cin >>n;
    long long m = 1e9+7;
    ll prev2=0,prev1=1,cur=0;
    for(ll i=1;i<n;i++)
    {
        cur = prev1+prev2;
        prev2=prev1;
        prev1=cur;
    }
    cout << prev1%m<<endl;
}
