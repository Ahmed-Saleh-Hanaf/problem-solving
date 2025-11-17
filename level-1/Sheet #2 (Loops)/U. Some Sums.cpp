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
    ll n, a, b , sum =0; cin >> n >> a >> b;
    loop(i,1,n)
    {
        ll x = i, sumd =0; 
        while (x)
        {
            sumd = sumd + (x %10);
            x/= 10;
        }
        if (sumd >= a && sumd <= b) sum+= i;
        
    }
    cout << sum << el;
    return 0;
}
