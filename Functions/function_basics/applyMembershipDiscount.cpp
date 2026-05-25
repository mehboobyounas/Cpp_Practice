#include <iostream>
using namespace std;

void applyMembershipDiscount(int &bill) {
    if (bill > 5000) {
        bill = bill - 500;
    }
}
int main() {
    int bill = 5100;
    applyMembershipDiscount(bill);
    cout << bill << endl;
}
