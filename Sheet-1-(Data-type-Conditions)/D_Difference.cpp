/*

The hardest battles are the ones you fight in silence — when no one sees your effort,

no one claps for you, and yet you keep going because quitting

would hurt more than pain itself.

I Say to you keep going and STAY HARD i proud of you.

*/

#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void Difference(int A, int B, int C, int D)
{
    cout << "Difference = " << (A * B) - (C * D); 
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C,D; 
    cin >> A >>B >> C >>D;

    Difference(A,B,C,D);

    return 0;
}