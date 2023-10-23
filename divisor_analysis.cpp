#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod = 1e9+7;
const int p = 1e6+10;
int bin(int a,int b,int m)
{
	a%=m;
	int ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans = (ans*1LL*a)%m;
		}
		a = (1LL*a*a)%m;
		b>>=1;
	}
	return ans;
}
int main()
{

	int t;
	cin >> t;
	int ans=1;
	for(int i=1;i<=t;i++)
	{
		int n,k;
		cin >> n>>k;
		ans *= bin(n,k,mod);
	}
	
	ll cnt=0,sum=0,prod=1;
	for(int i=1;i*i<=ans;i++)
	{
		if(ans%i==0)
		{
			cnt+=1;
			sum+=i;
			prod*=i;
			if(ans/i!=i)
			{
				cnt+=1;
				sum+=ans/i;
				prod*=ans/i;
			}
		}
	}
	cout << cnt << " "<<sum<< " "<< prod << endl;
}

