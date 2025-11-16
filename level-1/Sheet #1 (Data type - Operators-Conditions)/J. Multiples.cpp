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
    int a, b ; 
    cin >> a >> b ;
    if (a % b == 0 || b % a == 0)
    {
        cout << "Multiples" << el;
    }
    else
    {
        cout << "No Multiples" << el;
    }
    return 0;
}
