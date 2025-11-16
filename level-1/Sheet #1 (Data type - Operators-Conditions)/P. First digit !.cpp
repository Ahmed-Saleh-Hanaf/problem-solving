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
    int x ; cin >> x ;
    x /= 1000;
    if (x % 2 == 0)
    {
        cout << "EVEN" << el;
    }
    else
    {
        cout << "ODD" << el;
    }
    return 0;
}
