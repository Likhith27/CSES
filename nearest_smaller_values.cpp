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
	cin >> n;
	vector<int>v(m),t(m);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		t[i] = i-1;
		while(~t[i]&&v[t[i]] >= v[i])
			t[i]=t[t[i]];
		cout << t[i]+1 << " ";
	}


}