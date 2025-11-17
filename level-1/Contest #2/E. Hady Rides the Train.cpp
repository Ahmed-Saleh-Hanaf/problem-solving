// ============================================
// Abo Saleh 
// ============================================

#include <iostream>
#include<iomanip>    // cout << fixed << setprecision(9);
#include<cmath>
#include <climits>
using namespace std;
// ---------- Constants -----------------------
const double bi =  3.141592653;
const long long INF = LLONG_MAX ;
const long long _INF = LLONG_MIN ;
//----------------------------------------------
#define el "\n"
#define ull unsigned long long 
#define ll long long // 9*10^18
#define ld long double
#define loop(i,s,e) for (int i = s; i <= e; i++)
#define rloop(i,s,e) for (int i = s; i >= e; i--)
//----------------------------------------------
int main() {
    ll id ; cin >> id;
    ll row = id / 4;
    cout << row << " ";
    if (row % 2== 0)
    {
        ll s = row * 4;
        loop(i,0,3)
        {
            if (s == id)
            {
                cout << i << el;
                break;
            }
            s++;
        }
    }
    else 
    {
        ll e = row * 4;
        rloop(i,3,0)
        {
            if (e == id)
            {
                cout << i << el;
                break;
            }
            e++;
        }
    }
    return 0;
}
