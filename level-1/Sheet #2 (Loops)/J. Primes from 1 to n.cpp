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
    loop (i, 2, x)
    {
        bool is = true;
        loop(j,2,i-1)
        {
            if (i % j == 0)
            {
                is = false;
                break;
            }
        }
        if (is) cout << i <<" ";
    }
    cout << el;
    return 0;
}
