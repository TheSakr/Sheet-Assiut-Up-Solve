#include <iostream>
#include <iomanip>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double X, P;
    cin >> X >> P;

    double originalPrice = P * 100 / (100 - X);

    cout << fixed << setprecision(2) << originalPrice;

    return 0;
}
