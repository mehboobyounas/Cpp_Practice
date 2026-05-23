#include <iostream>
using namespace std;

float calculateTax(float totalBill, string province) {
    float tax = 0;
    if (province == "Punjab" || province == "punjab") {
        tax = totalBill*0.16;
    }
    else if (province == "Sindh" || province == "sindh") {
        tax = totalBill*0.13;
    }
    else {
        cout << "Invalid province name." << endl;
    }
    return tax;

}
int main() {

    float billamount;
    string province;
    cout << "Enter Total bill amount: ";
    cin >> billamount;
    cout << "Enter province name: ";
    cin >> province;
    float tax = calculateTax(billamount, province);
    cout << "Tax Amount: " << tax;

}