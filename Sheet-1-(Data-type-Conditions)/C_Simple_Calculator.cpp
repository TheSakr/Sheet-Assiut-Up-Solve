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

void Calculator(long long number1, long long number2)
{
    cout << number1 << ' + ' << number2 << ' = ' << number1 + number2 << endl;
    cout << number1 << ' * ' << number2 << ' = ' << number1 * number2 << endl;
    cout << number1 << ' - ' << number2 << ' = ' << number1 - number2 << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long number1, number2; 
    cin >> number1 >> number2;

    Calculator(number1, number2);

    return 0;
}