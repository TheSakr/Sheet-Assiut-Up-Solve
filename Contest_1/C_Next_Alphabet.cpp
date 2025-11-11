#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void Alphabet(char A)
{
    if(A == 'z')
    {
        cout << 'a' << endl;

    } else {

        cout << char(A + 1);
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char A; cin >> A;
    Alphabet(A);

    return 0;
}
