#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	// int n;
	// cin >> n;
	// // vector<int>v(n);

	// for(int i=2;i<=n;i+=2)
	// {
	// 	cout <<" " <<i;
	// }
	// for(int i=1;i<=n;i+=2)
	// {
	// 	cout << " "<<i;
	// }
	
    ll n,sum;
    cin>>n>>sum;
    vector<ll>v(n);
    for(int i=0;i<n;++i)
    	cin>>v[i];

    ll m=0,cnt=0;
    map<ll,ll>mp;
    for(int i=0;i<n;++i)
    {
    	m+=v[i];
    	if(m==sum)cnt++;
    	if(mp.find(m-sum)!=mp.end())
    	{
    		cnt+=mp[m-sum];
		}
		mp[m]++;
	}
	cout<<cnt<<endl;

}