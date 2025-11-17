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
    ll t; cin >> t ;
    while (t--)
    {
        ll n ; cin >> n;
        ll sumo = 0;
        while(n)
        {
            if (n % 2 != 0) sumo++;
            n/=2;
        }
        ll ans = 0 ;
        ll c = 1;
        while(sumo--)
        {
            ans += c;
            c *= 2;
        }
        cout << ans << el;
    }
    return 0;
}
