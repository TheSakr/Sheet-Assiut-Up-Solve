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

    string name1,name2,name3,name4;
    cin >> name1 >> name2 >> name3 >> name4;
 
    if(name2 == name4)
    {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }

    return 0;
}