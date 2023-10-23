#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ele;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        s.insert(ele);
    }
    cout << s.size();
    return 0;
    
    
    
}