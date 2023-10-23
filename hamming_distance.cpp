#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int m = 2e5;
 
bool is_pal(string s)
{
	string t = s;
	reverse(s.begin(),s.end());
	return s==t;
}
bool f(int n)
{
	return ceil((double)sqrt(n)) == floor((double)sqrt(n));
}
bool f1(int n,int m)
{
	return n>=1 and n<=m;
}
// int main()
// {
// 	// freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
// 	// int t;
// 	// cin >> t;
// 	// while(t--)
// 	// {
// 	// 	int
// 	// }
// 	int n;
// 	cin >> n;
// 	int k = __builtin_popcount(n);
// 	if(k==1)
// 		cout << 1 << end;
// 	else
// 		cout << 2 << endl;

// }
int main()
{
	int n,k; 
	cin>>n>>k;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) 
    {
    	string s; 
    	cin>>s;
    	reverse(s.begin(), s.end());
    	for (int j = 0; j < s.size(); j++) 
    	{
    		v[i] += (s[j] == '1')*(1<<j);
    	}
    }
    int ans = 32;
    for (int i = 0; i < n; i++) {
    	for (int j = i+1; j < n; j++) {
    		ans = min(ans, (int) __builtin_popcount(v[i]^v[j]));
    	}
    }
    cout<<ans;
}

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//         int n,count=0;
//         int a,b,i;
//         map<int,int> bt;

//         cin>>n;
//         pair<int,int> trc[n];
//         for(i=0;i<n;i++)
//         {
//             cin>>a>>b;
            
//         }


        
//         return 0;
// }