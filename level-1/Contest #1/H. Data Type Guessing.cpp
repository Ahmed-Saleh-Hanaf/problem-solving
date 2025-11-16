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
    ld n, k, a ; cin >> n >> k >> a ;
    ld ans = (n*k)/a;
    if (ans - (ll)ans > 0)
    {
        cout << "double" << el;
    }
    else 
    {
        if (ans <= 2147483647)
        {
            cout << "int" << el;
        }
        else 
        {
            cout << "long long" << el;
        }

    }
    return 0;
}
