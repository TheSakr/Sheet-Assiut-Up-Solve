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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number; cin >> number;
    string num = to_string(number);
 
    for(int i = 0; i < 1; i++)
    {
        if(num[0] % 2 == 0)
        {
            cout << "EVEN";
        } else {
            cout << "ODD";
        }
    }

    return 0;
}