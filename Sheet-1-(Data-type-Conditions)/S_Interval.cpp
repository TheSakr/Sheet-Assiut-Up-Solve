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

void Interval(double number)
{
    if (number >= 0 && number <= 25)
    {
    cout << "Interval [0,25]" << endl;

    } else if(number > 25 && number <= 50){

    cout << "Interval (25,50]" << endl;

    } else if (number > 50 && number <= 75){

    cout << "Interval (50,75]" << endl;

    } else if (number > 75 && number <= 100){

    cout << "Interval (75,100]" << endl;

    } else {

    cout << "Out of Intervals" << endl;
    
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double number;
    cin >> number;

    Interval(number);

    return 0;
}