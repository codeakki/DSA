#include<bits/stdc++.h>
using namespace std;
#define int long long 


void solve()
{   int n;
    cin >> n;
    vector<int> arr(n);
    for (int &el : arr)
        cin >> el;
    sort(arr.begin(), arr.end());
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] <= i + 1) {
            cout << i + 2 << '\n';
         return;
        }
    }
    cout << 1 << '\n';}
int32_t main()
{  int t ;
cin >> t;
while (t--){
  solve();
}
}