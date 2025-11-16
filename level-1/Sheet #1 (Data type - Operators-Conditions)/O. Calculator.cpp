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
    ll a, b;
    char s ;
    cin >> a >> s >> b;
    if (s == '+')
    {
        cout << a + b << el;
    }
    else if (s == '-')
    {
        cout << a - b << el;
    }
    else if (s == '*')
    {
        cout << a * b << el;
    }
    else
    {
        cout << a / b << el;
    }
    return 0;
}
