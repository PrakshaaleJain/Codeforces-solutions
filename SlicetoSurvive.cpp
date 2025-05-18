#include <bits/stdc++.h>
#include <math.h>
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

// ll log_fn(ll num){
//     ll ans = 0;
//     while(num > 1){
//         num = (num + 1) /2;
//         ans++;
//     }

//     return ans;
// }
#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll max_row = min(a, n - a + 1);
    ll max_col = min(b, m - b + 1);

    ll num1 = m;
    ll log_m = 0;
    while (num1 > 1) {
        num1 = (num1 + 1) / 2;
        log_m++;
    }

    ll num2 = max_row;
    ll log_row = 0;
    while (num2 > 1) {
        num2 = (num2 + 1) / 2;
        log_row++;
    }

    int cols = log_m + log_row;

    ll num3 = n;
    ll log_n = 0;
    while (num3 > 1) {
        num3 = (num3 + 1) / 2;
        log_n++;
    }

    ll num4 = max_col;
    ll log_col = 0;
    while (num4 > 1) {
        num4 = (num4 + 1) / 2;
        log_col++;
    }

    int rows = log_n + log_col;

    cout << min(cols, rows) + 1 << endl;
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