#include <bits/stdc++.h> 
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pii> > vvpii;
typedef vector<pdd> vpdd;
typedef vector<pll> vpll;
ll MOD = 1000000007;
double eps = 1e-12;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define reps(i,s,e) for(ll i = s; i < e; i++)
#define rrep(i,s) for(ll i = s; i >= 0; i--)
#define rreps(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--){
    int n;cin>>n;
    vi vec(n);
    int i=0;
    rep(i,n){
        cin>>vec[i];        
    }
    sort(vec.begin(),vec.end());
    stack<int> uni;
    stack<int> repSt;
    rep(i,n){
        if(uni.empty()||vec[i]!=uni.top()){
            uni.push(vec[i]);
        }
        else{
            repSt.push(vec[i]);
        }
    }
    int k=uni.size()-1;
    rrep(i,k){
        vec[i]=uni.top();
        uni.pop();
    }
    reps(i,k+1,n){
        vec[i]=repSt.top();
        repSt.pop();
    }
    rep(i,n){
    cout<<vec[i]<<" ";
    }
    cout<<endl;
    
 }
 return 0;
}