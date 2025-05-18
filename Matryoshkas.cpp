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
    cin >> n;

    vector<int> arr(n);
    forn(i,n)   cin >> arr[i];

    // int max_freq = 1, non_continous = 0;
    // sort(arr.begin(), arr.end());

    // // int freq = 1;
    // // for(int i = 1; i < n; i++){
    // //     if(arr[i] != arr[i-1]){ 
    // //         max_freq = max(max_freq, freq);
    // //         freq = 1;
    // //     }
    // //     else    freq++;
    // // }
    // // max_freq = max(max_freq, freq);

    // int cont = 0;
    // for(int i = 0; i < n-1; i++){
    //     if(arr[i] == arr[i+1] - 1){
    //         arr.erase(arr.begin()+i);
    //     }
    //     else if(arr[i] == arr[i+1]) continue;
    //     else {
    //         cont++;
    //         break;
    //     }
    // }


    // for(int i = 1; i < n; i++){
    //     if(arr[i] != arr[i-1] + 1 && arr[i] != arr[i-1])
    //         non_continous++;
    // }

    // cout << max_freq + non_continous << endl;

    unordered_map<int,int>  freq;
    set<int> st;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
        st.insert(arr[i]);
        st.insert(arr[i] + 1);
    }

    int r = 0;
    int ans = 0;
    for(auto num : st){
        int val = freq[num];
        ans += max(0, val - r);
        r = val;
    }   

    cout << ans << endl;



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