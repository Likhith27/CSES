#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n; 
     cin >> n;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
         int a;
         cin >> a;
         int p = upper_bound(v.begin(),v.end(),a)-v.begin();
         if(p<v.size())
            v[p]=a;
         else
            v.push_back(a);
            
     }
     cout << v.size();
     
}