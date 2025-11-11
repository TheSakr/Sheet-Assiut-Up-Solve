#include <iostream>
using namespace std;

#define ll  long long
#define ld  long double
#define ull unsigned long long int

void Memo_Momo(ll a, ll b, ll k)
{
  if(a % k == 0 && b % k == 0)
  {
    cout<<"Both";
  }
  else if(a % k == 0 && b % k != 0)
  {
    cout<<"Memo";
  }
  else if(a % k != 0 && b % k == 0)
  {
    cout<<"Momo";
  }
  else if(a % k != 0 && b % k != 0)
  {
    cout<<"No One";
  }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,k; cin >> a >> b >> k;
    Memo_Momo(a,b,k);

    return 0;
}
