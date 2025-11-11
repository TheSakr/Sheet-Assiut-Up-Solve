#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void Ali_Baba(long long a, long long b, long long  c,long long d)
{
    if(a * b - c == d)
    {
        cout<<"YES";
    }
    else if(a - b * c == d)
    {
        cout<<"YES";
    }
    else if(a + b * c == d)
    {
        cout<<"YES";
    }
    else if(a * b + c == d)
    {
        cout<<"YES";
    }
    else if(a + b - c == d)
    {
        cout<<"YES";
    }
    else if(a - b + c == d)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    Ali_Baba(a,b,c,d);

    return 0;
}
