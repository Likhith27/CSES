#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int m = 5e5;

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
	cin >>n;
	vector<ll>v(n);
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		sum += v[i];
	}
	sort(v.begin(),v.end());
	cout << max(sum,2*1LL*v[n-1]) << endl;
}