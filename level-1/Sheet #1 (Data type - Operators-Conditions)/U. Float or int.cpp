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
    double n; cin >> n;
    if (n - (ll)n > 0)
    {
        cout << "float " << (ll)n <<" " <<n - (ll)n << el;
    }
    else
    {
        cout << "int " << (ll)n<< el;
    }
    return 0;
}
