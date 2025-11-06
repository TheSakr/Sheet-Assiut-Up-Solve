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

    int age; cin>>age;
    int years = age / 365;
    age %= 365;
 
    int months = age / 30;
    age %= 30;
 
    int days = age;
 
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
 
    return 0;
}