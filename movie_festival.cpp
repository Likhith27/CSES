#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b;
    vector<pair<int,int>>v;
    while(n--)
    {
        cin >> a >> b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int curr=0,tot=0;
    for (auto ele : v)
	{
		if (ele.second >= curr)
		{
			curr = ele.first;
			tot++;
		}
	}
	cout << tot;
    
}