#include <iostream>
using namespace std;

void printReceipt(string customer_name, int billamount, float diccount) {
    cout << "Wellcome to Freshway Sweets" << endl;
    cout << "Your Bill Details are given below." << endl;
    cout << "Total Bill is: " << billamount << endl;
    cout << "Diccount is: " << billamount*0.1 << endl;
    cout << customer_name << "Sahib Your final payable is " << billamount-(billamount*.10);

}
int main() {
    string customer_name = "Mehboob Younas";
    int billamount = 1000;
    float diccount = billamount*0.1;
    printReceipt(customer_name, billamount, diccount);
}