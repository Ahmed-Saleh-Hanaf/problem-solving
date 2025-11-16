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
    ll a, b, c ; 
    char s , e;
    cin >> a >> s >> b >> e >> c;
    if (s == '+' )
    {
        if (a + b == c)
        {
            cout << "Yes" << el;
        }
        else
        {
            cout << a + b << el;
        }
    }
    else if (s == '-' )
    {
        if (a - b == c)
        {
            cout << "Yes" << el;
        }
        else
        {
            cout << a - b << el;
        }
    }
    else
    {
        if (a * b == c)
        {
            cout << "Yes" << el;
        }
        else
        {
            cout << a * b << el;
        }
    }

    return 0;
}
