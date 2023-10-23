// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define l long
// #define ui unsigned int
// const ll n =1e9+7;
// int bin(int a,ui b,int m)
// {
//     int ans=1;
//     a = a%m;
//     while(b>0)
//     {
//         if(b&1)
//         {
//             ans = (ans*1LL*a)%m;
//         }
//         a = (1LL*a*a)%m;
//         b>>=1;
//     }
//     return ans;
//     // ll res = bin(a,b/2,n);
//     // if(b&1)
//     // {
//     //     return a*(res*res)%n;
//     // }
//     // else
//     // {
//     //     return res*res;
//     // }
// }
// int main()
// {
//     int t;
//     cin >>  t;
//     while(t--)
//     {
//         int a,b,c;
//         cin >> a >> b>>c;
//         cout << bin(a,bin(b,c,n-1),n)<<endl;
//     }
    
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define ui unsigned int
const ll n =1e9+7;
int bin(int a,int b,int m)
{
    int ans=1;
    a = a%m; // extra step from etf
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
    // ll res = bin(a,b/2,n);
    // if(b&1)
    // {
    //     return a*(res*res)%n;
    // }
    // else
    // {
    //     return res*res;
    // }
}
int main()
{
    int t;
    cin >>  t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b>>c;
        cout << bin(a,bin(b,c,n-1),n)<<endl;
    }
    
}