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
    ll n;cin >> n;
    loop(i,1,n)
    {
        loop(j,1,n)
        {
            if (i == (n/2+1) && j == (n/2+1)) cout << "X";
            else if (i == j) cout <<"\\";
            else if (i+j == n+1) cout << "/";
            else cout << "*";
        }
        cout << el;
    }
    return 0;
}
