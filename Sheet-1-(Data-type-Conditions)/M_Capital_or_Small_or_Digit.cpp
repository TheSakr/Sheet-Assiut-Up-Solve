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

void isDigit(char A)
{
    int number = int(A);
 
    if (number >= 65 && number <= 90) {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else if (number >= 97 && number <= 122) {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    else if (number >= 48 && number <= 57) {
        cout << "IS DIGIT" << endl;
    }
    else {
        cout << "IS OTHER" << endl;
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char A; cin >> A;

    isDigit(A);

    return 0;
}