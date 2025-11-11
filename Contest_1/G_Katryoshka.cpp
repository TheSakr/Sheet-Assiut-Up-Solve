#include <iostream>
#include <algorithm>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long e, m, b, res = 0;
    cin >> e >> m >> b;
 
    long long mn = min({e, m, b});
    res += mn;
 
    e -= mn;
    m -= mn;
    b -= mn;
 
    mn = min(e / 2, b);
    res += mn;
 
    cout << res << endl;

    return 0;
}
