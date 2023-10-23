
#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define pf printf
#define ar array
const int mod = 1e9+7;

int f(int n,vector<int>&dp)
{
	if(n<0)
		return 0;
	if(n==0)
		return 1;
	if(dp[n]!=-1)
		return dp[n];
	int ans=0;
	for(int i=1;i<=6;i++)
		ans += f(n-i,dp)%mod;
	return dp[n]=ans;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	// freopen ("input.txt","r",stdin);
    // freopen ("output.txt","w",stdout);
	int n;
	cin >> n;
	vector<int>dp(n+1,-1);
	cout << f(n,dp)<< endl;

}
