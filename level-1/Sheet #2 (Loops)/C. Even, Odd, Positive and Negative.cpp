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
    int ne; cin >> ne;
    ll e = 0 , o = 0, p = 0, n = 0 ;
    loop(i,1,ne)
    {
        int x;
        cin >> x;
        if (x % 2 == 0) e++;
        else o++;
        if (x > 0) p++;
        else if (x < 0) n++;
    }
    cout << "Even: "<< e << el;
    cout << "Odd: "<< o << el;
    cout << "Positive: "<< p << el;
    cout << "Negative: "<< n << el;

    return 0;
}
