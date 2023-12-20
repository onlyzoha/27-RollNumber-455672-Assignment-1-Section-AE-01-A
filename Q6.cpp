#include <iostream>
using namespace std;
int main() {
    int numItems;
    double itemPrice, taxRate, totalCost = 0.0;
    cout << "Enter the number of items purchased: ";
    cin >> numItems;
    while (numItems <= 0) {
        cout << "Please enter a valid number of items (greater than 0): ";
        cin >> numItems;}
    for (int i = 1; i <= numItems; ++i) {
        cout << "Enter the price for item " << i << ": $";
        cin >> itemPrice;
        while (itemPrice < 0) {
            cout << "Please enter a valid price (non-negative): $";
            cin >> itemPrice;}
        totalCost += itemPrice; }
    cout << "Enter the tax rate (in percentage): ";
    cin >> taxRate;
    while (taxRate < 0) {
        cout << "Please enter a valid tax rate (non-negative): ";
        cin >> taxRate;}
    double taxAmount = totalCost * (taxRate / 100.0);
    double finalCost = totalCost + taxAmount;
    cout << "Total cost of items: $" << totalCost << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Final cost (including tax): $" << finalCost << endl;
    return 0;}


