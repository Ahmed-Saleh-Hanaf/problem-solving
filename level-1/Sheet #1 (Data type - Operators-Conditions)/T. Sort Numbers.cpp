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
    ll a , b , c; cin >> a>> b >> c;
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            cout << c << el << b << el<< a << el;
        }
        else
        {
            cout << b << el << c << el<< a << el;
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            cout << c << el << a << el<< b << el;
        }
        else
        {
            cout << a << el << c << el<< b << el;
        }
    }
    else
    {
        if (a >= b)
        {
            cout << b << el << a << el<< c << el;
        }
        else
        {
            cout << a << el << b << el<< c << el;
        }
    }
    cout << el  <<a << el << b << el<< c << el;
    return 0;
}
