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
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
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

void akkicpp()
{
    int n, a, b;
    cin >> n >> a >> b;
    int c = a * 1;
    int d = b + 1;
    

    while (c >= n || d>=n)
    {
        if (c==n || d== n)
        {
            cout << "Yes" << endl;
            return;
        }
        else
        {
            c *= a;
            d += b;
        }
    
    }
    cout<<"No" << endl;
}
int32_t main()
{
    w(x)
    {
        akkicpp();
    }
}
