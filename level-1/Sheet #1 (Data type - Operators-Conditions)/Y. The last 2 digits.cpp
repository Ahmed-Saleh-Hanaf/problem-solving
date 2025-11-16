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
    ll a, b , c, d ; 
    cin >> a >> b >> c >> d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    if ((a * b * c * d ) % 100 < 10)
    {
        cout <<"0" << (a * b * c * d ) % 100 ;
    }
    else
    {
        cout << (a * b * c * d ) % 100 ;
    }
    

    return 0;
}
