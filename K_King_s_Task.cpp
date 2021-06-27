
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define X first
#define sz(a) (int)(a.size())
#define Y second
#define eb emplace_back
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0)
const int maxn = 3E5 + 5;

void akkicpp(){
    int n ;
    cin >> n;
    int m=n+n;
    vi a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int cnt1=0;
    int cnt2=0;
   for(int i=0;i<m;i++){
       if(a[i]>a[i+1]){
           swap(a[i],a[i+1]);
           cnt1++;
       }
   }
   for(int i=0;i<m;i++){
       if(a[i]>a[n+1]){
           swap(a[i],a[n+1]);
           cnt2++;
       }
   }
   cout<<min(cnt2,cnt1)<<endl;

}
int32_t main()
{
   // fastIO();
   
        akkicpp();
    
}