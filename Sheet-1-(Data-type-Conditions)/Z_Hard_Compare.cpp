/*

The hardest battles are the ones you fight in silence — when no one sees your effort,

no one claps for you, and yet you keep going because quitting

would hurt more than pain itself.

I say to you: keep going, stay hard, and be proud of yourself.

*/

#include <iostream>
#include <cmath>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void TheSakr(int A, int B, int C, int D)
{
    
    long double val1 = pow(A, B / min(B, D));
    long double val2 = pow(C, D / min(B, D));
    
    if (val1 > val2)
    {
        cout << "YES";
        
    } else {

        cout << "NO";
    }
        
}

int main() {
        
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
    long double A, B, C, D;
    cin >> A >> B >> C >> D;

    TheSakr(A,B,C,D);

    return 0;
}