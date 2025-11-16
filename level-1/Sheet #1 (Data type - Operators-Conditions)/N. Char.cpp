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
    char s ;
    cin >> s ;
    if (s >= 'a' && s <= 'z')
    {
        cout << char (s-32) << el;
    }
    else 
    {
        cout << char (s+32) << el;
    }
    return 0;
}
