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
    ll n ; cin >> n;
    ll c = 1;
    rloop(i,n,1)
    {
        loop(j,1,i-1) cout << " ";
        loop(j,1,c) cout << "*";
        cout << el;
        c+=2;
    }
    c-=2;
    loop(i,1,n)
    {
        loop(j,2,i) cout << " ";
        loop(j,1,c) cout << "*";
        cout << el;
        c-=2;
    }
    return 0;
}
