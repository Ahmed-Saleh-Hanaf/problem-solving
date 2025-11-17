// ============================================
// Abo Saleh 
// ============================================

#include <iostream>
#include<iomanip>    // cout << fixed << setprecision(9);
#include<cmath>
#include <climits>
using namespace std;
// ---------- Constants -----------------------
const double bi =  3.141592653;
const long long INF = LLONG_MAX ;
const long long _INF = LLONG_MIN ;
//----------------------------------------------
#define el "\n"
#define ull unsigned long long 
#define ll long long // 9*10^18
#define ld long double
#define loop(i,s,e) for (int i = s; i <= e; i++)
#define rloop(i,s,e) for (int i = s; i >= e; i--)
//----------------------------------------------
int main() {
    ll t; cin >> t;
    while (t--)
    {
        ll l, r; cin >> l >> r;
        ll mx = max(l,r), mn = min(l,r);
        ll sumtomx = (mx * (mx+1)) /2;
        ll sumtomn = (mn* (mn+1)) /2 ;
        ll ans = sumtomx - sumtomn + mn ;
        cout << ans << el;
    }
    return 0;
}
