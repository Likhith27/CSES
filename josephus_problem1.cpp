// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	// vector<int>v(n);

// 	for(int i=2;i<=n;i+=2)
// 	{
// 		cout <<" " <<i;
// 	}
// 	for(int i=1;i<=n;i+=2)
// 	{
// 		cout << " "<<i;
// 	}

// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// int n;
	// cin >> n;
	// // vector<int>v(n);

	// for(int i=2;i<=n;i+=2)
	// {
	// 	cout <<" " <<i;
	// }
	// for(int i=1;i<=n;i+=2)
	// {
	// 	cout << " "<<i;
	// }
	int n; 
	cin>>n;
    int a = 1, b = 0;
    while(n > 0) 
    {
    	for (int i = 2; i <= n; i+=2) 
    	{
    		cout<<a*i + b<<' ';
    	}
    	if(n&1) 
    	{
    		cout << a + b <<' ';
    		b += a;
    	}
    	else 
    		b -= a;
    	a <<= 1;
    	n >>= 1;
    }

}