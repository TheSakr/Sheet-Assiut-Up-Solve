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

void Summation(int number)
{
   // Avoid using a for loop here — it might lead to performance issues.

   cout << ((number + 1) * number) / 2; 

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number; cin >> number;
    Summation(number);

    return 0;
}