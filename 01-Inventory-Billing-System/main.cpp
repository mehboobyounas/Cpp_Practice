#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    int item_id=0;
    int product_quantity=0;
    int menu_slector=0;
    int total_items=0;
    int number_of_inventory_items=0;
    struct ims {
        string name;
        int id;
        int stock;
        int price;

    };
    ims inventory[number_of_inventory_items];
    do {
        cout << string(47,'*') << endl;
        cout << "Press 1 to Add  Inventory"
        << endl<< "Press 2 to Check Inventory" <<endl <<  "Press 3 for bill" <<endl <<  "Press 4 to exit" <<endl
        << "Select from the given menu: "  ;
        cin >> menu_slector;
        if (menu_slector == 1 ) {
            cout << "Kitni Items add krna chahte hain Number Enter kren: "; cin>>number_of_inventory_items;

            for (int i = 0; i < number_of_inventory_items; i++) {
                cout << "Enter Item name to add in inventory: ";cin >> inventory[i].name;
                cout << "Enter Item ID: ";cin >> inventory[i].id;
                cout << "Enter Item Price: ";cin >> inventory[i].price;
                cout << "Enter Item Quantity: ";cin >> inventory[i].stock;
            }
        } else if (menu_slector == 2 ) {
            cout << string(47,'=') << endl;
            cout << left << setw(15)<<"Name" <<"|"
                        << setw(10)<<"ID" <<"|"
                        << setw(10)<<"Price" <<"|"
                        << setw(10)<<"Inventory" <<"|" <<endl;
            cout << string(47,'=') << endl;

            for (int i = 0; i < number_of_inventory_items; i++) {
                cout <<setw(15)<< inventory[i].name;
                cout << setw(10)<<inventory[i].id ;
                cout << setw(10)<< inventory[i].price;
                cout << setw(10)<< inventory[i].stock << endl;
                cout << string(47,'-') << endl;
            }

        } else if (menu_slector == 3 ) {
            cout << "Enter Quantity "; cin >> product_quantity;
            cout << "Enter Product ID "; cin >> item_id;
            for (int i = 0; i < number_of_inventory_items; i++) {
                if (inventory[i].id != item_id ) {
                    cout << "App Ne Product ID Ghlt Enter Ki hai!" << endl;
                }
                else if (inventory[i].id == item_id && product_quantity <= inventory[i].stock) {
                    inventory[i].stock = inventory[i].stock - product_quantity;
                    cout << string(47, '=')<< endl;
                    cout << left << setw(15) << "Product" << setw(10) << "ID" << setw(10) << "Quantity"
                    << setw(10) << "Bill" <<endl;
                    cout << setw(15)<< inventory[i].name;
                    cout << setw(10) << inventory[i].id;
                    cout << setw(10) << product_quantity;
                    cout << setw(10) << inventory[i].price * product_quantity << endl;
                    cout << string(47, '=')<< endl;

                }
                else {
                    cout << "Hamare paas sirf "<< inventory[i].stock << "piece available hain." << endl;
                }
            }

        }




    } while (menu_slector != 4);

}

