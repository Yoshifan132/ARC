#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,a,b) for(int i=a;i<b;i++)


int main() {
    int n,ans=inf;
    cin>>n;
    vector<int> t(n);
    rep(i,0,n) cin>>t[i];
    for(int i = 0; i < (1<<n); i++){
        int cnt1=0,cnt2=0;
        for(int j = 0; j < n; j++){
            if(i&(1<<j)) cnt1+=t[j];
            else cnt2+=t[j];
        }
        ans = min(ans,max(cnt1,cnt2));
    }
    cout<<ans<<endl;
}