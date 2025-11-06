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
#define ull unsigned long long 

void Coordinates(double numberOne, double numberTwo)
{

    if(numberOne>0 && numberTwo>0)
    {
        cout<<"Q1";
    }
    else if(numberOne<0 && numberTwo>0)
    {
        cout<<"Q2";
    }
    if(numberOne<0 && numberTwo<0)
    {
        cout<<"Q3";
    }
    if(numberOne>0 && numberTwo<0)
    {
        cout<<"Q4";
    }
    if(numberOne==0 && numberTwo==0)
    {
        cout<<"Origem";
    }
    if(numberOne!=0 && numberTwo==0)
    {
        cout<<"Eixo X";
    }
    if(numberOne==0 && numberTwo!=0)
    {
        cout<<"Eixo Y";
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double numberOne,numberTwo;
    cin>>numberOne>>numberTwo;

    Coordinates(numberOne,numberTwo);

    return 0;
}