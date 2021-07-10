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
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
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
    string s;
    cin>>s;
    int n=s.size();
    int index=-1;
    int visited=0;
    set<char>temp;


    for(int i=0;i<n;i++){
        temp.insert(s[i]);
        if(s[i]>97+n-1)
        visited=1;
    }

  /*   for(int i=0;i<n;i++){
        if(s[i]=='a'){
            index = i;
            break;
            
        }
    } */

    if(temp.size()!=n){
        cout<<"NO"<<endl;
        return;
    }

    if(visited==1){
        cout<<"NO"<<endl;
        return;
    }
   /*  bool ans=true;
    if(index==-1){
        ans=false;
    } */
  /*   else{
            int val=(int)s[index];
             visited =1;
              int l,r;
              l=r=index;
            while(visited<n){
                if(0<=l-1 && (int)s[l-1]==val+1){
                    visited++;
                    l-=1;
                    val+=1;

                }
                else if( r+l<=n &&(int)s[r+1]==val+1){
                    visited++;
                    r+=1;   
                    val+=1;
                }
                else
                break;
            }

    }
    if(visited<n){
        ans=false;
    }
    if(ans==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    } */

    for(int i=1;i<n-1;i++){
        if(s[i]>s[i-1] && s[i]>s[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int32_t main()
{
    w(x){
        akkicpp();
    }
}

