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

void Multiples(int number1, int number2)
{
    if(number1 % number2 == 0 || number2 % number1 == 0 )
    {
        cout << "Multiples";
    } else {
        cout << "No Multiples";
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     
    int number1,number2;
    cin >> number1 >> number2;

    Multiples(number1,number2);
    return 0;
}