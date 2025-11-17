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
//----------------------------------------------
int main() {
    ll x ; cin >> x;
    bool ch = false;
    ll cx = x , rx = 0;
    while (cx)
    {
        ll d = cx % 10;
        if (d != 0)
        {
            cout << d ;
            ch = true;
        }
        else 
        {
            if (ch) cout << 0;
        }
        cx/=10;
        if (ch || d != 0) 
        {
            rx *= 10 ;
            rx+= d;
        }
    }
    cout << el;
    if (rx == x) cout << "YES" << el;
    else cout << "NO" << el;
    return 0;
}
