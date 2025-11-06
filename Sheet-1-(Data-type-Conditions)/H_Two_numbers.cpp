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

void Two(double number1, double number2)
{
    
    // floor
    int F = (int)(number1 / number2);
    
    // ceil
    int C = (int)(number1 / number2);
    if (number1 / number2 > C)  
    C += 1;
    
    // round
    double division = number1 / number2;
    double frac = division - (int)division;  
    int result;
    
    if (frac >= 0.5)
    result = (int)division + 1;
    else
    result = (int)division;
 
    cout << "floor " << number1 << " / " << number2 << " = " << F << endl;
    cout << "ceil " << number1 << " / " << number2 << " = " << C << endl;
    cout << "round " << number1 << " / " << number2 << " = " << result << endl;
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double number1, number2;
    cin >> number1 >> number2;
    
    Two(number1,number2);

    return 0;
}