#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        // ll mod = 1e9+7
        cin >> n;
        // vector<int>v;
        int sum=0;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                sum++;
                if(n/i!=i)
                    sum++;
            }
            
        }
        cout << sum << endl;
    }
    
}
