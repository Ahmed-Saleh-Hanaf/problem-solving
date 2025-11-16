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
    ll a, b ; 
    char s ;
    cin >> a >> s >> b;
    if (s == '>' && a > b)
    {
        cout << "Right" << el;
    }
    else if (s == '<' && a < b)
    {
        cout << "Right" << el;
    }
    else if (s == '=' && a == b)
    {
        cout << "Right" << el;
    }
    else
    {
        cout << "Wrong" << el;
    }

    return 0;
}
