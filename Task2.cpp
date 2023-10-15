#include<iostream>
using namespace std;
void reverse(string statement);
main()
{
    cout <<"Enter 'true' or 'false': ";
    string statement;
    cin >> statement;
    reverse(statement);
}
void reverse(string statement)
{
    if(statement == "true")
    {
    cout <<"false";
    }
    if(statement == "false")
    {
    cout <<"true";
    }
}