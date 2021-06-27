#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int n, a[N], ans = INT_MAX, u, v, T;
int main()
{
	ios::sync_with_stdio(false);
	cin>>T;
	while(T--){
	    ans = INT_MAX;
	    cin >> n >> u >> v;
	    for(int i = 1; i <= n; i++)
		    cin >> a[i];
	    for(int i = 2; i <= n; i++)
	    {
		    if(abs(a[i] - a[i - 1]) >= 2) ans = 0;
	    	if(abs(a[i] - a[i - 1]) == 1) ans = min(ans, min(u, v));
		    if(a[i] == a[i - 1]) ans = min(ans, v + min(u, v));
	    }
	    cout << ans << endl;
	}
	
	return 0;
}