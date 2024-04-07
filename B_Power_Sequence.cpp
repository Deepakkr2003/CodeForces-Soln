#include <bits/stdc++.h>
using namespace std;
//#define AL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ld long double
#define ll long long 
#define fi first
#define se second
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll)x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
#define mpp map<int,int>
#define asort(v)  sort(v.begin(), v.end()); // For Sorting in accending order
#define dsort(v)  sort(v.begin(), v.end(), greater<int>()); // For sorting in decending order
#define Rev(v)    reverse(v.begin(), v.end());
#define bit(x) (1<<(x))
template<class T> void inarr(vector<T> &v){  for(auto &x:v) cin >> x;  }
template<class T> void outarr(vector<T> &v){ for(auto x:v)  cout << x << " "; cout << endl;}
int countDigit(int n){ return floor(log10(n) + 1); }
const ll mod = 1e18;
inline void Y(){ cout << "YES" << endl; }
 
void precision(int a) {cout << setprecision(a) << fixed;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
bool PowerOfTwo(ll num) {return (num > 0) && ((num & (num - 1)) == 0);}
bool is_prime(int n) { if (n == 1) {return false; } int i = 2;while (i*i <= n) { if (n % i == 0) {  return false; } i += 1; } return true;}
const int N = 1e6 + 7;
 
 
void solve(){
   ll n;
    cin >> n;
    vll a(n);
    fo(i,0,n){
        cin >> a[i];
    }
    sort(all(a));
    ll big=1e15;
    ll c=1;
    ll ans=big;
    while(1){
        ll val=0,pw=1;
        fo(i,0,n){
            if(pw>=big){
                val=-1;
                break;
            }
            val+=abs(pw-a[i]);
            pw*=c;
        }
        if(val==-1){
            break;
        }
        ans=min(ans,val);
        c++;
    }
    cout << ans << endl;
}
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t=1;
  //cin>>t;
    //precision(20) ;
    while(t--){
        solve();   
    }
}