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
	int n;
	ll sum=0;
	cin >> n ;
	vector<int>v(n);
	map<ll,int>mp;
	mp[0]++;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		sum = (sum+v[i]%n+n)%n;
		ans += mp[sum];
		mp[sum]++;
	}
	cout << ans << endl;
}