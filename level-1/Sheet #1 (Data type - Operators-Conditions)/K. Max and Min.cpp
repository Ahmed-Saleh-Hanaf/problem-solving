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
    int a, b, c; 
    cin >> a >> b >> c;
    int  mn = a, mx = a ;
    if (b < mn) mn = b;
    if (c < mn) mn = c ;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    cout << mn <<" " <<mx << el ;
    return 0;
}
