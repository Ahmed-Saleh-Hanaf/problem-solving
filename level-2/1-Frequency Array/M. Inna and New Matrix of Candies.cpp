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
#define printm(v,n,m)  loop(i,0,n-1){loop(j,0,m-1){cout << v[i][j] << " ";} cout << el;}
#define print(v) for (auto e: v) {cout << e << " ";} cout << el;
#define sz(v)	((int)((v).size()))
#define all(d) d.begin(), d.end()
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

// ============================================
void solve() 
{
    ll n,m; cin >> n >> m;
    vc<string> a(n); read(a);
    uset<ll> h;
    bool is=false;
    loop(i,0,n-1)
    {
            ll g, s ;
            loop(j,0,m-1)
            {
                if (a[i][j]=='G') g= j;
                if (a[i][j]=='S') s=j;
            }
            if (s >= g) h.insert(s-g);
            else {is= true; break;}
    }
    if(is) cout << -1<< el;
    else cout << sz(h) << el;
}


int main() 
{
    Fast();
    ll t = 1;
    //cin >> t ;
    while(t--) solve();
    return 0;
}
//g++ main.cpp -o main
//main.exe < input.txt
