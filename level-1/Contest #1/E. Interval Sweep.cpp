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
    ll a, b ; cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "NO"<< el;
    }
    else if (max(a,b) - min(a,b) <2 )
    {
        cout << "YES" << el;
    }
    else 
    {
        cout << "NO"<< el;
    }
    return 0;
}
