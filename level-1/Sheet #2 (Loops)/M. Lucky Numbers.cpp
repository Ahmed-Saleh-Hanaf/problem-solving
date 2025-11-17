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
    ll a, b ; cin >> a >> b;
    bool ch = true;
    loop (i, a, b)
    {
        bool is = true;
        ll ci = i ;
        while (ci)
        {
            if (ci % 10 != 4 && ci % 10 != 7)
            {
                is = false;
                break;
            }
            ci /= 10;
        }
        if (is) 
        {
            cout << i <<" ";
            ch = false;
        }
    }
    if (ch) cout << -1 ;
    cout << el;
    return 0;
}
