/*

The hardest battles are the ones you fight in silence — when no one sees your effort,

no one claps for you, and yet you keep going because quitting

would hurt more than pain itself.

I say to you: keep going, stay hard, and be proud of yourself.

*/

#include <iostream>
#include <iomanip>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void Area(int R)
{
    double PI = 3.141592653;
    cout << fixed << setprecision(9);
    cout << PI * (R * R);

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R; cin >> R;
    Area(R);

    return 0;
}