#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int menu_selector =0;
    string message = "is eligible for 20% Eid Discount!";
    int user_id=0;
    int cutomer_bill=0;
    struct Customer {
        int customer_id;
        string name;
        int total_points=0;
        string tier = "Bronze";
        int total_spent=0;
    };

    Customer c[3];
    do {
        cout << "1   Register New Customer"<< endl << "2   Log New Purchase (Add Bill & Points)"<< endl
        << "3   View Loyalty Dashboard"<< endl << "4   View Gold VIP Customers"<< endl<<
            "5   Exit"<< endl << "Select From Given Menu: "; cin >> menu_selector;

        if (menu_selector == 1){
            for (int i = 0; i < 3; i++) {
                cout << "Customer " << i + 1 << " initialization" << endl;
                cout << "Customer ID: "; cin >> c[i].customer_id;
                cout << "Customer name: "; cin >> c[i].name;
                c[i].total_spent = 0;
                c[i].total_points = 0;

            }
        }
        if (menu_selector == 2) {
            cout << "Enter Customer ID: "; cin >> user_id;
            cout << "Enter Customer Bill: "; cin >> cutomer_bill;
            for (int i = 0; i < 3; i++) {
                if (c[i].customer_id == user_id ) {
                    c[i].total_spent += cutomer_bill;
                    c[i].total_points += (cutomer_bill*0.01);
                    c[i].tier = (c[i].total_points > 150) ? "Gold" : (c[i].total_points > 50) ? "Silver" : "Bronze";
                }
            }
        }
        if (menu_selector == 3) {
            cout << string (60 , '*')<<endl;
            cout << left << setw(15) << "Name" << setw(10) << "Id" << setw(20) << "Total Spent" << setw(10) << "Points"
            << setw(10) << "Tier" << endl;
            cout << string (50 , '*')<<endl;
            for (int i = 0; i < 3; i++) {
                cout << setw(15)<<c[i].name;
                cout << setw(10) <<c[i].customer_id;
                cout << setw(20) <<c[i].total_spent;
                cout << setw(10) <<c[i].total_points;
                cout << setw(10) <<c[i].tier << endl;
            }
        }
        if (menu_selector == 4) {
            cout << string (60 , '*')<<endl;
            cout << left << setw(10) << "Points" << setw(15) << "Name"  << setw(40) << "Discount"<< endl;
            cout << string (50 , '*')<<endl;
            for (int i = 0; i < 3; i++) {
                if (c[i].tier == "Gold") {
                    cout << setw(10) << c[i].total_points;
                    cout << setw(15) << c[i].name;
                    cout << setw(40) << message << endl;
                }



            }
        }
    } while (menu_selector != 5);

}