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

void Max_Or_Min(int a, int b, int c)
{
    int maxNum = a;
    int minNum = a;
 
    if (b > maxNum)
        maxNum = b;
    if (c > maxNum)
        maxNum = c;
 
    if (b < minNum)
        minNum = b;
    if (c < minNum)
        minNum = c;
 
    cout <<minNum << " " << maxNum << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    Max_Or_Min(a,b,c);

    return 0;
}