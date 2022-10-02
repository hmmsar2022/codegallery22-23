#include<bits/stdc++.h>
using namespace std;

int INF = 1000000005;
long long INFF = 1000000000000000005LL;
#define sqr(x) ((ll)(x) * (x))
#define watch(x) cout<<#x<<" : "<<x<<endl
#define all(x) x.begin(), x.end()
#define len(v) v.size()
#define srt(v) sort( v.begin(), v.end())
#define rsrt(v) sort( v.rbegin(), v.rend())
#define rvrs(v) reverse( v.begin(), v.end())
#define rep(i, a, n) for(long long i = a; i < n; i++)
#define rep0(i, n) for(long long i = 0; i < n; i++)
#define rep1(i, n) for(long long i = 1; i <= n; i++)
#define repn(i, n) for(long long i = n-1;i >= 0;i--)
#define repstl(i,v) for(auto &i: v)
#define pb push_back
#define out(x) cout<<x<<"\n";
#define endl "\n"
#define outs(x) cout<<x<<" "
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
typedef pair<long long, long long> pl;
typedef pair<long long, pl> ppl;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
typedef vector<pair<long long, long long>> vll;
typedef vector<ppl> vlll;
typedef vector<string> vs;
ll mod = 1e9 + 7;

int main(){
    fastio;
    ll n,m;
    cin>>n>>m;
    vl p(n),q(m);
    ll a = 0, b=0;
    rep(i,0,n){
        cin>>p[i];
        a += p[i];
    }
    rep(i,0,m){
        cin>>q[i];
        b += q[i];
    }
    rep(i,1,n){
        p[i] += p[i-1];
    }
    rep(i,1,m){
        q[i] += q[i-1];
    }
    ll ans = -1;
    bool flag = false;
    repn(i,n){
        rep(j,0,m){
            if(p[i] == q[j]){
                ans = p[i];
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(ans != -1){
        out(ans);
    }
    else{
        out("Not possible");
    }

    return 0;
}