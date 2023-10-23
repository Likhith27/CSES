#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n,k;
    cin >> n>>k;
    map<int,int>ump;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if(ump.count(k-x))
        {
            cout << i+1 << " " << ump[k-x] << endl;
            return 0;
        }
        ump[x]=i+1;
    }
    cout << "IMPOSSIBLE";
   
    
}
