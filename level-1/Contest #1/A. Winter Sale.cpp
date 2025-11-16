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
    ld x, p ; cin >> x >> p;
    ld ans = (100*p)/(100-x);
    cout << fixed << setprecision(2);
    cout << ans ;
    return 0;
}
