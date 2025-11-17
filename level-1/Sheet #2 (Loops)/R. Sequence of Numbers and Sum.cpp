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
    while (true)
    {
        ll n, m; cin >> n >> m;
        if (n < 1 || m < 1) break;
        ll sum = 0 ;
        loop(i,min(n,m),max(n,m)) 
        {
            cout << i << " ";
            sum+= i;
        }
        cout << "sum =" << sum << el;
    }
    return 0;
}
