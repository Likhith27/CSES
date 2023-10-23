#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define ui unsigned int
const int  m = 1e6+1;

int main()
{
    // int t;
    // cin >>  t;
    // while(t--)
    // {
        
    // }
    int n;
    cin >> n;
    vector<int>freq(m,0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<int>t(m,0);
    for(int i=1;i<m;i++)
    {
        for(int j=i;j<m;j+=i)
        {
            if(freq[j])
                t[i] += freq[j];
        }
    }
    int k=0;
    for(int i=1;i<m;i++)
    {
        if(t[i]>1)
            k = i;
    }
    cout << k << endl;
}