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
    if (n == 1) cout << 0 ;
    if (n > 1) cout << 0 << " " << 1 << " ";
    ll pr = 0 , cur =1 ;
    loop(i,1,n-2)
    {
        cout << pr + cur << " ";
        ll temp = cur ;
        cur = pr + cur;
        pr = temp;
    }
    cout << el;
    return 0;
}
