#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin >> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int k = (y2-y1)/(x2-x1);
        int l = (y4-y3)/(x4-x3);
        if(k==l)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}