#include<iostream>
using namespace std;
void discount(string name, float price);
main()
{
    string country;
    float price;
    cout << "Enter the country's name: ";
    cin >> country;
    cout << "Enter the ticket price in dollars: $";
    cin >> price;
    discount(country,price);
}
void discount(string name, float price)
{
    float final_price;
    float discount;
    if(name=="Pakistan")
    {
        discount=price*5/100;
        final_price=price-discount;
        cout << "Final ticket price after discount: $"<<final_price;
    }
    if(name=="Ireland")
    {
        discount=price*10/100;
        final_price=price-discount;
        cout << "Final ticket price after discount: $"<<final_price;
    }
    if(name=="India")
    {
        discount=price*20/100;
        final_price=price-discount;
        cout << "Final ticket price after discount: $"<<final_price;
    }if(name=="England")
    {
        discount=price*30/100;
        final_price=price-discount;
        cout << "Final ticket price after discount: $"<<final_price;
    }if(name=="Canada")
    {
        discount=price*45/100;
        final_price=price-discount;
        cout << "Final ticket price after discount: $"<<final_price;
    }

}