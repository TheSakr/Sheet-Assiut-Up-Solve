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

void F_Or_I(double N)
{
    
    int intPart = (int)N;
    double fracPart = N - intPart;
    
    if (fracPart == 0)
    cout << "int " << intPart << endl;
    else
    cout << "float " << intPart << " " << fracPart << endl;
}
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double N;
    cin >> N;

    F_Or_I(N);
    return 0;
}