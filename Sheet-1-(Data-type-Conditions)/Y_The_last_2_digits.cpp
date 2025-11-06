/*

The hardest battles are the ones you fight in silence — when no one sees your effort,

no one claps for you, and yet you keep going because quitting

would hurt more than pain itself.

I say to you: keep going, stay hard, and be proud of yourself.

*/

#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void T_L_2_D(int a, int b, int c, int d)
{
    long long mult = a * b % 100;

    mult = mult * c % 100;

    mult = mult * d % 100;
    
    if (mult < 10)
    {
    cout << "0" << mult;
    } else {
    cout << mult;
    }
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    T_L_2_D(a,b,c,d);

    return 0;
}