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
    int n; cin >> n;
    int f = n % 10 , s = (n/10) % 10;
    if (f % s == 0 || s % f == 0)
    {
        cout << "YES" << el;
    }
    else 
    {
        cout << "NO" << el;
    }
    return 0;
}
