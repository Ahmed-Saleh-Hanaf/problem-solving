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
#define loop(i,s,e) for (int i = s; i <= e; i++)
//----------------------------------------------
int main() {
    while (true)
    {
        int x ; cin >> x;
        if (x != 1999)
        {
            cout << "Wrong"<< el;
        }
        else
        {
            cout << "Correct" << el;
            break;
        }
    }

    return 0;
}
