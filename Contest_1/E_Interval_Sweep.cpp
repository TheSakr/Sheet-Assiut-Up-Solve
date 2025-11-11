#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;

    if (a + b == 0) {

        cout << "NO" << endl;

    } else if (abs(a - b) <= 1){

        cout << "YES" << endl;
    } else {

        cout << "NO" << endl;
    }

    return 0;
}
