#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    long long int n;
    cin >> n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >>v[i];
    }
    sort(v.begin(),v.end());
    // vector<bool>k(sum,false);
    long long ans=1;
    for(int i=0;i<n;i++)
    {
        if(ans<v[i])
            break;
        else
        {
            ans+=v[i];
        }
    }
    cout << ans << endl;
}
