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

void Math(int numberOne,char op1, int numberTwo,char op2, int numberThree)
{
    
    if(op1 == '+')
    {
        if (numberOne + numberTwo == numberThree)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<numberOne + numberTwo;
        }
    }
    if(op1 == '-')
    {
        if (numberOne - numberTwo == numberThree)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<numberOne - numberTwo;
        }
    }
    if(op1 == '*')
    {
        if (numberOne * numberTwo == numberThree)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<numberOne * numberTwo;
        }
    }
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numberOne; cin>>numberOne;
    char op1; cin>>op1;
    int numberTwo; cin>>numberTwo;
    char op2; cin>>op2;
    int numberThree; cin>>numberThree;

    Math(numberOne,op1,numberTwo,op2,numberThree);

    return 0;
}