#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0,j=n-1;i<j;)
    {
        while(i<j && a[i]+a[j]>x)
            --j;
        if(i>=j)
            break;
        cnt++;
        ++i,--j;
    }
    cout << n-cnt;
}