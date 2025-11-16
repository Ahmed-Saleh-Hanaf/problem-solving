// ============================================
// Abo Saleh 
// ============================================

#include <iostream>
#include<iomanip>    // cout << fixed << setprecision(9);
#include<cmath>
using namespace std;
// ---------- Constants -----------------------
const double bi =  3.141592653;
//----------------------------------------------
#define el "\n"
#define ull unsigned long long 
#define ll long long // 9*10^18
#define ld long double
//----------------------------------------------
int main() {
    ll n, m, k ; cin >> n>>m>>k;
    ll mn = min (n,m);
    mn = min(mn,k);
    ll ans = mn ;
    n -= mn ;
    m -= mn ;
    k -= mn;
    if (n > 0)
    {
        n /= 2;
        mn = min(n, k);
        ans += mn ;
    }
    cout << ans << el;
    return 0;
}
