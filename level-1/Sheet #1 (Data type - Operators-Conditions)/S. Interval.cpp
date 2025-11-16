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
    double x ; cin >> x;
    if (x >= 0 && x <= 25)
    {
        cout << "Interval [0,25]";
    }
    else if (x > 25 && x <=50 )
    {
        cout << "Interval (25,50]";
    }
    else if (x > 50 && x <=75 )
    {
        cout << "Interval (50,75]";
    }
    else if (x > 75 && x <=100 )
    {
        cout << "Interval (75,100]";
    }
    else 
    {
        cout << "Out of Intervals";
    }
    return 0;
}
