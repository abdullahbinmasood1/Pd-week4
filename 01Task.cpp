#include<iostream>
using namespace std;
void equivalence(int n1, int n2);
main()
{
    int number1,number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    equivalence(number1,number2);
}
void equivalence(int n1, int n2)
{
    if(n1==n2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

}