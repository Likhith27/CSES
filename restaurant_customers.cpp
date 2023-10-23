#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{	
    int t;
    cin >> t;
    vector<pair<int,int>>v;
    for(int i=1;i<=t;i++)
    {
    	int a,b;
	    cin>>a>>b;
	    int cnt=0;
	    v.push_back({b,a});
	    
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
    	if(v[i].first<v[i+1].second)
    		cnt++;
    }
    cout << cnt+1 << endl;
 }