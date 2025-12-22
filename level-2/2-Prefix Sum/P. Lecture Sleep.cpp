// ============================================
// Abo Saleh 
// ============================================

//----------------------------------------------
#include <iostream>      
#include <iomanip>       // cout << fixed << setprecision(2)  ->cout << setfill('0') << setw(5) << 42; → "00042"
#include <sstream>       // stringstream ss(line) ->ss >> a >> b >> c; ->string s = to_string(x); int y = stoi(s);    
#include <fstream>

// Data Structure---------------------------------
#include <array>         
#include <vector>
#define vc vector        
#include <deque>         
#include <list>          
#include <queue>         
#include <stack>         
#include <string>        
#include <set>           
#include <unordered_set> 
#define uset unordered_set
#include <map>           
#include <unordered_map>
#define umap unordered_map
#include <tuple>         
#include <bitset>

//algorithm and Utilities------------------------
#include <algorithm>     
#include <numeric>       
#include <functional>    
//Math and Constants-----------------------------
#include <cmath>         
#include <climits>  
#include <cfloat>

//--------------------------------------------
using namespace std;
// ---------- Constants -----------------------
const double bi =  3.141592653;
const long long INF = LLONG_MAX ;
const long long _INF = LLONG_MIN ;
const int N = 1e7 + 5;
const long long MOD = 1'000'000'007;
const pair<int, int> DIR4[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const pair<int, int> DIR8[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
//----------------------------------------------
#define el  "\n"
#define ull unsigned long long 
#define ll long long // 9*10^18
#define ld long double
#define loop(i,s,e) for (ll i = s; i <= e; i++)
#define rloop(i,s,e) for (ll i = s; i >= e; i--)
#define read(v) for (auto &e: v) cin >> e;
#define readm(v,n,m)  loop(i,0,n-1)loop(j,0,m-1)cin >> v[i][j];
#define readp(v) for(auto &e:v) cin>> e.first>>e.second;
#define printm(v,n,m)  loop(i,0,n-1){loop(j,0,m-1){cout << v[i][j] << " ";} cout << el;}
#define print(v) for (auto e: v) {cout << e << " ";} cout << el;
#define sz(v)	((int)((v).size()))
#define all(d) d.begin(), d.end() //greater<ll>()
#define F first
#define S second
#define PB push_back
#define MP make_pair
//----------------------------------------------

// ---------- My Functions ----------
void Fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin),
    freopen("output.txt", "w", stdout);
#endif
}

void IO()
{
    freopen("input.txt", "r", stdin),
    freopen("output.txt", "w", stdout);
}

// ============================================
void solve() 
{
   ll n,k; cin >> n >>k;
   vc<ll>a(n); read(a);
   vc<ll>t(n); read(t);
   vc<ll>p(n);loop(i,0,n-1)p[i]= (t[i]==0?a[i]:0);
   loop(i,1,n-1)p[i]+=p[i-1];
   
   ll mx = _INF;
   ll s = -1 , e = -1;
   loop(i,0,n-k)
   {
        ll l=i, r= i+k-1;
        ll x = p[r]-(l>0?p[l-1]:0);
        if(x > mx)
        {
            mx = x;
            s = l; e =r;
        }
   }
   loop(i,s,e)t[i]=1;
   ll ans = 0;
   loop(i,0,n-1) ans += (t[i]*a[i]);
   cout << ans << el;

}


int main() 
{
    Fast();
    //IO(); //if input output file
    ll t = 1;
    //cin >> t ;
    while(t--) solve();
    return 0;
}
//g++ main.cpp -o main
//main.exe < input.txt
