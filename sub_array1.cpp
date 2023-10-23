// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// int main()
// {
// 	// int n;
// 	// cin >> n;
// 	// // vector<int>v(n);

// 	// for(int i=2;i<=n;i+=2)
// 	// {
// 	// 	cout <<" " <<i;
// 	// }
// 	// for(int i=1;i<=n;i+=2)
// 	// {
// 	// 	cout << " "<<i;
// 	// }
	
//     ll n,sum;
//     cin>>n>>sum;
//     vector<ll>v(n);
//     for(int i=0;i<n;++i)
//     	cin>>v[i];
    
//     ll m=0,cnt=0;
//     map<ll,ll>mp;
//     for(int i=0;i<n;++i)
//     {
//     	m+=v[i];
//     	if(m==sum)cnt++;
//     	if(mp.count(m-sum))
//     	{
//     		cnt+=mp[m-sum];
// 		}
// 		mp[m]++;
// 	}
// 	cout<<cnt<<endl;

// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int m = 2e5;

// int n;
// ll x;
// // vector<vector<int>>v(m,vector<int>(2,0));
// ar<int,2>a[m];
// int sum(int n)
// {
// 	return (n*(n+1))>>1;
// }
int main()
{
	int n,x;
	ll sum=0;
	cin >> n >> x;
	vector<int>v(n);
	map<ll,int>mp;
	mp[0]++;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		sum += v[i];
		ans += mp[sum-x];
		mp[sum]++;
	}
	cout << ans << endl;
}