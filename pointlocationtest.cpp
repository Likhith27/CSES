#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x1,y1,x2,y2,x3,y3;
        cin >>x1>>y1>>x2>>y2>>x3>>y3;
        long long cp = (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
        if (cp < 0) 
            cout<<"RIGHT"<<endl;
        if (cp > 0) 
            cout<<"LEFT"<<endl;
        if (cp == 0) 
            cout<<"TOUCH"<<endl; 
    }
}