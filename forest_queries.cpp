#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 1e3;
int vis[m+1][m+1];
string s[m];
int n,q;
int main()
{
    cin >> n>>q;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='*')
                vis[i+1][j+1]++;

        }
        for(int j=0;j<n;j++)
        {
            vis[i+1][j+1]+=vis[i+1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            vis[i+1][j]+=vis[i][j];
        }
    }
    while(q--)
    {
        int x1,y1,x2,y2;
        cin >> y1>>x1>>y2>>x2;
        y1--;
        x1--;
        cout << vis[y1][x1]+vis[y2][x2]-vis[y1][x2]-vis[y2][x1] << endl;

    }
}
// int exp(int x, int y, int md){
//     int ans = 1;
//     x = x%md;
//     while (y > 0) {
//         if (y&1)
//             ans = ans*x%md;
//         y = y>>1;
//         x = x*x%md;
//     }
//     return ans;
// }

// const int mxN = 2e6+6;
// int F[mxN], I[mxN];