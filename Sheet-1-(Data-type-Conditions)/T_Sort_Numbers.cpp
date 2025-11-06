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

void Sort(int A, int B, int C)
{
    
    int a = A, b = B, c = C;
    
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    
    cout << a << "\n" << b << "\n" << c << "\n\n";
    
    cout << A << "\n" << B << "\n" << C << endl;
    
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B, C;
    cin >> A >> B >> C;

    Sort(A,B,C);

    return 0;
}