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
        cout << "ALPHA" << el << "IS SMALL" << el;
    }
    else if (s >= 'A' && s <= 'Z')
    {
        cout << "ALPHA" << el << "IS CAPITAL" << el;
    }
    else
    {
        cout << "IS DIGIT" << el;
    }
    return 0;
}
