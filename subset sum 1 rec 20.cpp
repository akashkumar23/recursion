
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define lld long long double
#define fi first
#define se second
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fl(i,a,b) for(ll i=a; i<b; i++)
#define fle(a,b) for(ll i=a; i<=b; i++)
#define pll pair<ll,ll>
#define vll vector<ll>
#define vld vector<ld>
#define vs vector<string>
#define vpll vector<pair<ll,ll>>
#define mll map<ll,ll>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define ceil(a,b) (a+b-1)/b
#define intake(a,n) ll n; cin>>n; vector<ll> a(n); for(ll i=0;i<n;i++) cin>>a[i]
#define intake2(a,n,k) ll n,k; cin>>n>>k; vector<ll> a(n); for(ll i=0;i<n;i++) cin>>a[i]
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pq priority_queue
#define loop(n) for(int i=0;i<n;i++)
#define out(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<"\n"
#define en "\n"
// #define sp <<" "
#define sorti(a) sort(a.begin(),a.end())
#define sortd(a) sort(a.rbegin(),a.rend())
#define get_sum(a) accumulate(a.begin(),a.end(),0LL)
#define get_max(a) *max_element(a.begin(),a.end())
#define get_min(a) *min_element(a.begin(),a.end())
#define get_max_pos(v) max_element(v.begin(), v.end()) - v.begin()
#define unique(s) unique(s.begin(), s.end()) - s.begin() // retunrns the # of unique blocks elements
#define setbits(x) __builtin_popcountll(x)
#define ceil(a,b) (a+b-1)/b
const int mod = 1000000007;
const int dom = 998244353;
const ll inf = 2100000000;
const ld eps = 1e-6, pi = 3.14159265358979323846264338327950;
const long long INF = 4000000000000000000LL;
const ll MAX = 1e5;
const ll NINF = (-1) * INF;


// x|(1<<k) : sets the kth bit
// x&~(1<<k): unsets the kth bit
// x^(1<<k) : inverts the kth bit

// IN BIT-MANIPULATION : THINK BITS ARE INDEPENDENT OF EACH OTHER. 
// FIRST THINK ALGO THEN IMPLEMENT 

//*****************solved below********************//
// DONT CODE RANDOMLY SOMETHING FOOLISH, YOU BITCH

// vector<vector<int>>arr(n,vector<int>(m));
//    fi(i,n)fi(j,m)cin>>arr[i][j];

void subset_sum1(ll i, ll sum, ll n, vll v, set<ll> &st){
	
	if(i==3){
		st.insert(sum);
		return;
	}
	
	sum += v[i];
	subset_sum1(i+1, sum, n, v, st);
	
	sum -= v[i];
	subset_sum1(i+1, sum, n, v, st);
	
}

void solve(){
	
	ll n; cin>>n;
	vll v(n);
	for(ll i=0; i<n; i++){
		cin>>v[i];
	}
	set<ll>st;
	subset_sum1(0,0,n,v,st);
	for(auto &x : st){
		cout<<x<<" ";
	}
}
	
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll q=1;
    // cin>>q;
	
	while(q--){
		solve();
		cout<<en;
	}
	return 0;
}
 