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

void Comparison(double numberOne,char op, double numberTwo)
{
    if (op == '>') {
        if (numberOne > numberTwo)
        cout << "Right";
        else
        cout << "Wrong";
    } 
    else if (op == '<') {
        if (numberOne < numberTwo)
        cout << "Right";
        else
        cout << "Wrong";
    } 
    else if (op == '=') {
        if (numberOne == numberTwo)
        cout << "Right";
        else
        cout << "Wrong";
    } 
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double numberOne;
    char op;
    double numberTwo;

    cin >> numberOne >> op >> numberTwo;

    Comparison(numberOne,op,numberTwo);
    

    return 0;
}