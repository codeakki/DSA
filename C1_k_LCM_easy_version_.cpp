
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

void akkicpp()
{
    int n, k;
    cin >> n >> k;
    if (n % 2!=0)
    {
        cout << 1 << " " << n / 2 << " " << n / 2 << "\n";
    }
    else if (n % 2 == 0 && n % 4!=0)
        cout << 2 << " " << n / 2 - 1 << " " << n / 2 - 1 << "\n";
    else
    {
        cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
    }
}
int32_t main()
{
    w(x)
    {
        akkicpp();
    }
}