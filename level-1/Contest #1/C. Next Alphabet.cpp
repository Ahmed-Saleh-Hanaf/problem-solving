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
    char s ; cin >> s;
    if (s == 'z') cout << 'a' << el;
    else cout << char(s+1) << el;
    return 0;
}
