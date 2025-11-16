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
    ull a, b, k ; cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
    {
        cout << "Both";
    }
    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo";
    }
    else if (a % k != 0 && b % k == 0)
    {
        cout << "Momo";
    }
    else
    {
        cout << "No One";
    }
    return 0;
}
