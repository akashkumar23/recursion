
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

bool isSafe(ll n, ll col, ll row, vector<string>&board){
	
	// cheking left 
	for(ll j=0; j<col; j++){
		if(board[row][j] == 'Q'){
			return false;
		}
	}
	
	// checking upperleft diagonal
	ll i=row, j=col;
	
	while(i>=0 && j>=0){
		if(board[i][j]=='Q'){
			return false;
		}
		i--;
		j--;
	}
	
	// checking lowerleft diagonal
	i=row, j=col;
	
	while(j>=0 && i<n){
		if(board[i][j]=='Q'){
			return false;
		}
		i++;
		j--;
	}
	
	return true;
	
}

void nq(ll n, ll col, vector<string>&board, vector<vector<string>>&ans){
	
	if(col == n){
		// ans.pb(board);
		// for(ll i=0; i<n; i++){
			// for(ll j=0; j<n; j++){
				// cout<<board[i][j]<<" ";
			// }
			// cout<<en;
		// }
		return;
	}
	
	for(ll row=0; row<n; row++){
		if(isSafe(n,col,row,board)){
			board[row][col] = 'Q';
			nq(n,col+1,board,ans);
			board[row][col] = '.';
		}
	}
	
}

void solve(){
	
	ll n;
	cin>>n;
	vector<string> board(n);
	string s(n, '.');
	for(ll i=0; i<n; i++){
			board[i] = s;
	}
	// for(ll i=0; i<n; i++){
		// for(ll j=0; j<n; j++){
			// cout<<board[i][j]<<" ";
		// }
		// cout<<en;
	// }
	vector<vector<string>> ans;
	
	nq(n,0,board,ans);
	
	

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
 