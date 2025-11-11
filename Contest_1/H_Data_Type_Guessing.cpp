#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     
    double num1,num2,num3;
    cin >> num1 >> num2 >> num3;
 
    double result = (num1 * num2) / num3;
    long long mynumber = result;
 
    double myResult = result - mynumber;
 
    if(myResult > 0)
    {
        cout<<"double"<<endl;
    }
    else if (mynumber <= 2147483647)
    {
        cout<<"int"<<endl;
    }
    else 
    {
        cout<<"long long"<<endl;
    }

    return 0;
}
