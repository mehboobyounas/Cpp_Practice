#include <iostream>
using namespace std;

    bool isEligibleForLoan(int current_balance, int monthly_income, bool has_bad_credit_history) {
        if (monthly_income >= 30000 && current_balance >= 50000 && has_bad_credit_history == false) {
            cout << "Your are eligible for loan";
            return true;

        } else {
            cout << "Your are not eligible for loan";
            return false;
        }
    }
int main() {
        int current_balance, monthly_income;
        bool has_bad_credit_history;
    cout << "Enter Your Current Balance: "; cin >> current_balance;
        cout << "Enter Your Monthly Income: "; cin >> monthly_income;
        cout << "Do you have bad crdit history 1 for Yes and 0 for No: "; cin >> has_bad_credit_history;
        isEligibleForLoan(current_balance, monthly_income, has_bad_credit_history);
}