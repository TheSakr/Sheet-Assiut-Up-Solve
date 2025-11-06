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

void Last(int number1, int number2)
{
    number1 = number1 % 10;   
    number2 = number2 % 10;    
 
    cout << number1 + number2 <<endl;

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number1,number2; 
    cin >> number1 >> number2;

    Last(number1,number2);
    return 0;
}