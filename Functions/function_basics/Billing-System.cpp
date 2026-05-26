#include <iostream>
using namespace std;
float calculate_gross_bill(int net_bill, float tax) {
     int gross_bill=0;
     tax = (net_bill*tax)/100;
     gross_bill = net_bill+tax;
     return gross_bill;
}
void apply_special_discount(int &gross_bill) {
     if (gross_bill > 10000) {
          gross_bill = gross_bill-1000;
     }
}
void display_final_bill(const string &customer_name, const int final_bill) {
     cout << "Dear " << customer_name << " your bill details are given below";
     cout <<"You have to "<<final_bill<<endl;
}
int main() {
     int net_bill;
     float tax =0;
     int gross_bill;
     int final_bill;
     string customer_name;
     cout << "Enter customer name : "; cin >> customer_name;
     cout << "Enter amout of bill: "; cin >> net_bill;
     cout << "Enter tax %: "; cin >> tax;
     gross_bill = calculate_gross_bill((net_bill), tax);
     apply_special_discount(gross_bill);
     display_final_bill(customer_name, gross_bill);


}

// Created by Developer on 25/05/2026.
//
