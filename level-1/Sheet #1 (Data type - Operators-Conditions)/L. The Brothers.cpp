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
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if (s1 == s2)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT" ;
    }
    return 0;
}
