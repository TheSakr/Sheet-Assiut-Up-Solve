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

void Two_Intervals(int a, int b, int c, int d)
{
    
    if (a > b) {

    swap(a, b);

    }
    if (c > d){

    swap(c, d);

    }
    
    int start = max(a, c);
    int end = min(b, d);
    
    if (start <= end) {

        cout <<start << " " << end;

    } else {

        cout <<-1;
    }
}
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    Two_Intervals(a,b,c,d);

    return 0;
}