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
    ll n; cin >> n;
    ll mx = _INF;
    loop(i,1,n)
    {
        ll x; cin >> x;
        ll t = 0 ;
        while (true)
        {
            if (x % 2 == 0) t++;
            else break;
            x /= 2;
        }
        mx = max (mx,t);
    }
    cout << mx << el;
    return 0;
}
