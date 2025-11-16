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
//----------------------------------------------
int main() {
    ll l1, r1, l2, r2 ; 
    cin >> l1 >> r1 >> l2 >> r2;
    ll l3 = max(l1, l2), r3 = min (r1,r2);
    if (l3 <= r3)
    {
        cout << l3 << " " << r3 ;
    }
    else
    {
        cout << -1 ;
    }

    return 0;
}
