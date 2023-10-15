#include<iostream>
using namespace std;
void trueORfalse(string st1);
main()
{
    string st1;
    cout << "Enter 'true' or 'false': ";
    cin >> st1;
    trueORfalse(st1);
}
void trueORfalse(string st1)
{
    if(st1=="true")
    {
        cout <<"false";
    }
    if(st1=="false")
    {
        cout << "true";
    }
    
}