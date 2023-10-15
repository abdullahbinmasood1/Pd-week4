#include<iostream>
using namespace std;
void flowerShop(float redRose,float whiteRose,float tulip);
main()

{
    float redRose,whiteRose,tulip;
    cout << "Red Rose: ";
    cin >> redRose;
    cout << "White Rose: ";
    cin >> whiteRose;
    cout << "Tulips: ";
    cin >> tulip; 
    flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(float redRose,float whiteRose,float tulip)
{
    float price,discount,price_After_discount;
    price=2*redRose+4.10*whiteRose+2.50*tulip;
    discount=price*20/100;
    price_After_discount=price-discount;
    cout << "Original Price: $"<< price <<endl;
    if(price>200)
    {
        cout << "Price after Discount: $" << price_After_discount;
    }
    else
    {
        cout << "No discount applied.";
    }
}