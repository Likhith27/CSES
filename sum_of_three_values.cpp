#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int m = 5e3;

int n;
ll x;
// vector<vector<int>>v(m,vector<int>(2,0));
ar<int,2>a[m];
// int sum(int n)
// {
// 	return (n*(n+1))>>1;
// }
int main()
{
	cin >> n>>x;
	for(int i=0;i<n;i++)
	{
		cin >> a[i][0];
		a[i][1]=i;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		ll x2 = x-a[i][0];
		for(int j=i+1,k=n-1;j<k;j++)
		{
			while(j<k && a[j][0]+a[k][0]>x2)
				k--;
			if(j<k && a[j][0]+a[k][0]==x2)
			{
				cout << a[i][1]+1 << " "<<a[j][1]+1 << " "<<a[k][1]+1 ;
				return 0;
			}
		}
	}
	cout << "IMPOSSIBLE";
}