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
    ll d ; cin >> d ;
    ll y = d / 365;
    d %= 365;
    ll m = d / 30 ;
    d %= 30 ;
    cout << y <<" years" << el << m <<" months" << el << d << " days" << el;
    return 0;
}
