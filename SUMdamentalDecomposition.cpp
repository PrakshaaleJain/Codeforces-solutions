#include <bits/stdc++.h>
using namespace std;

#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define rep(i,k,j) for(int i = k; i<j; ++i)
#define rrep(i,k,j) for(int i = j; i>=k; --i)
#define all(x) x.begin(), x.end()
#define out(x) cout << x << '\n';
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n';
#define pm cout<<"-1"<<'\n';
#define nl cout<<'\n';
#define sp <<' ';
#define cap(s) std::transform(s.begin(), s.end(), s.begin(), std::ptr_fun<int, int>(std::toupper))
#define small(s) std::transform(s.begin(), s.end(), s.begin(), std::ptr_fun<int, int>(std::tolower))
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<ll,ll> ml;

// Debug Overloads
#ifdef localenv
#define debug(x) _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.s); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr <<"]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr <<"]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << "";} cerr << "]";}

// Operator Overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " ";return ostream; }

/************************************************** CODE HERE *****************************************************/

void solve(){
	int n;
}

/************************************************** ENDS HERE *****************************************************/

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
  return 0;
}