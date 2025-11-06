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

void Calc(int number1, char in, int number2)
{
    switch (in)
    {
        case '+':
        cout << number1 + number2 << endl; 
        break;
        case '-':
        cout << number1 - number2 << endl; 
        break;
        case '*':
        cout << number1 * number2 << endl; 
        break;
        case '/':
        cout << number1 / number2 << endl; 
        break;
    }
}
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int number1, number2;
    char in; 
    cin >> number1 >> in >> number2;

    Calc(number1,in,number2);
    
    return 0;
}