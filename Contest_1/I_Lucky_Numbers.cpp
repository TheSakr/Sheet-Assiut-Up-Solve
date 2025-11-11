#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
 
    int number1 = N / 10; 
    int number2 = N % 10; 
 
    if ((number2 != 0 && number1 % number2 == 0) || (number1 != 0 && number2 % number1 == 0)) {

        cout << "YES";
    
    } else {
    
        cout << "NO";
    }

    return 0;
}
