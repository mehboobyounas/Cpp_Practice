#include <iostream>

#include <iomanip>

#include <vector>

using namespace std;

struct stock {
  string ticker;
  int shareCount;
  float buyPrice;
  float currentPrice;
};
float porfitCalculator(stock st) {
  float result = 0;
  if (st.buyPrice < st.currentPrice) {
    result = (st.currentPrice - st.buyPrice) * st.shareCount;
  } else if (st.buyPrice > st.currentPrice) {
    result = (st.currentPrice-st.buyPrice)*st.shareCount;
  } else {
    cout << "No Profit, No Loss";
  }
  return result;
}
void updateCurrentPrice(vector < stock > & myPortfolio) {
  for (int i = 0; i < myPortfolio.size(); i++) {
    cout << "Enter price for " << myPortfolio[i].ticker;
    cin >> myPortfolio[i].currentPrice;
  }
}
void displayPortfolioReport(const vector < stock > & myPortfolio) {
  cout << string(40, '*') << endl;
  cout << left << setw(10) << "Stock" << setw(10) << "Shares" << setw(20) << "Profit/Loss" << endl;
  cout << string(45, '-') << endl;

  for (int i = 0; i < myPortfolio.size(); i++) {
    cout << setw(10) << myPortfolio[i].ticker <<
      setw(10) << myPortfolio[i].shareCount <<
      setw(20) << porfitCalculator(myPortfolio[i])<<endl;

  }
}

int main() {
  int menu_selector = 0;
  vector < stock > myPortfolio;
  stock st;
  do {
    cout << endl;
    cout << "1 Make Your Portfolio" << endl;

    cout << "2 Update Current Prices"<< endl;

    cout << "3 To See Invested Stock List" << endl;

    cout << "4 Check Profit or Loss of a specific Stock" << endl;

    cout << "5 Display Portfolio Report" << endl;

    cout << "6 Exit" << endl;
    cout << "Enter Your Menu Selection: ";
    cin >> menu_selector;
    if (menu_selector == 1) {
      for (int i = 0; i < 3; i++) {
        cout << "Enter Stock Symbol: ";
        cin >> st.ticker;
        cout << "Enter Your Share Count: ";
        cin >> st.shareCount;
        cout << "Enter Your Buy Price: ";
        cin >> st.buyPrice;
        cout << "Enter Your Current Price: ";
        cin >> st.currentPrice;
        myPortfolio.push_back(st);
      }
    } else if (menu_selector == 2) {
      updateCurrentPrice(myPortfolio);
    } else if (menu_selector == 3) {
      for (int i = 0; i < myPortfolio.size(); i++) {
        cout << "1 " << myPortfolio[i].ticker << endl;
      }

    }
    else if (menu_selector == 4) {
      string symbol;
      cout << "Enter Stock Symbol: ";
      cin >> symbol;
      bool found = false;
      for (int i = 0; i < myPortfolio.size(); i++) {
        if (symbol == myPortfolio[i].ticker) {
          float profit=porfitCalculator(myPortfolio[i]);
          cout << profit;
          found = true;
          break;
        }
      }
      if (!found) {
        cout << "No Such Stock in your Portfolio";
      }
    } else if (menu_selector == 5) {
      displayPortfolioReport(myPortfolio);
    }
  } while (menu_selector != 6);

}