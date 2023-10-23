#include<bits/stdc++.h>
using namespace std;
long long f(long long n)
{
    long long k = (pow(n,4) - pow(n,2))/2;
    long long  l = 4*(n-2)*(n-1);
    return k-l;
}
int main()
{
    long long n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cout << f(i) << endl;
    }
    
    
}