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
    ld a, b , c, d ; 
    cin >> a >> b >> c >> d;
    // log(A^B) = log(A).B
    a = log(a);
    c = log(c);
    a = a * b;
    c = c * d;
    if (a > c)
    {
        cout << "YES" << el;
    }
    else
    {
        cout << "NO" << el;
    }

    return 0;
}
