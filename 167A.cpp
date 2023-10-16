#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    ll n,m,count=0,value=0;
    cin>>n>>m;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    sort(a.begin(),a.end());
    if(n==2*m){
        rep(i,0,m){
            value=a[2*i]+a[2*i+1];
            count+=pow(value,2);
        }
        cout<<count<<endl;
        return 0;
    }
    if(n==m){
        rep(i,0,m){
            value=a[i];
            count+=pow(value,2);
        }
        cout<<count<<endl;
        return 0;
    }
    rep(i,0,n-m){
        value=a[i]+a[2*(n-m)-1-i];
        count+=pow(value,2);
    }
    rep(i,2*(n-m),n){
        value=a[i];
        count+=pow(value,2);
    }
    cout<<count<<endl;
}