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
ll a[m];
int main()
{
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++)
		cin >> a[i];
	ll left = *max_element(a,a+n);
	ll right = 1e18;
	while(left<right)
	{
		ll mid = (left+right)>>1;
		int c=0;
		ll ls = 0;
		for(int i=0;i<n;i++)
		{
			if(ls+a[i]>mid)
			{
				++c;
				ls=0;
			}
			ls+=a[i];
		}
		c++;
		if(c>k)
			left = mid+1;
		else
			right =mid;
	}
	cout << left <<endl;
}