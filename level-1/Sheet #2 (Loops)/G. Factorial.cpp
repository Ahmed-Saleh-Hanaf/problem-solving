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
    ll t ; cin >> t;
    // fc0 = 1
    loop(i,1,t)
    {
        ll x, fc = 1 ; cin >> x;
        loop(j,2,x)
        {
            fc*=j;
        }
        cout << fc << el;
    }
    return 0;
}
