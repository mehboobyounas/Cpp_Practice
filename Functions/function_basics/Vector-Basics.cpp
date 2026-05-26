#include <iostream>
#include <vector>
using namespace std;
void printSalaries(const vector<int> &salaries) {
    for (int i=0; i<salaries.size(); i++) {
        cout << "Salary of employee "<<i+1<< " is "<<salaries[i]<<endl;;
    }
}
int main() {
    vector<int> salaries;
    int temSalary;

    cout << " Enter Salaries of employees ";
    for (int i = 0; i<5; i++) {
        cin >> temSalary;
        salaries.push_back(temSalary);
    }
    printSalaries(salaries);
    cout<<salaries.capacity();


}