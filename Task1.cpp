#include<iostream>
using namespace std;
void numbers(int n1,int n2);
main()
{
    cout << "Enter the first number: ";
    int number1;
    cin >> number1;
    cout << "Enter the second number: ";
    int number2;
    cin >> number2;
    numbers(number1,number2);
}
void numbers(int n1,int n2)
{
    if(n1=n2)
    {
        cout<<"true";
    }
    if(n1!=n2)
    {
        cout<<"false";
    }
}
