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
    double x, y ; cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "Origem" << el;
    }
    else if (x == 0 && y != 0)
    {
        cout << "Eixo Y" << el;
    }
    else if (x != 0 && y == 0)
    {
        cout << "Eixo X" << el;
    }
    else if (x > 0 && y >  0)
    {
        cout << "Q1" << el;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2" << el;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3" << el;
    }
    else 
    {
        cout << "Q4" << el;
    }
    return 0;
}
