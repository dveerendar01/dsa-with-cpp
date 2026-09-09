#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int n = prices.size();
    int maxProfit = 0;
    int mini = prices[0];

    for(int i=1; i<n; i++) {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);

        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    if(n <= 0) {
        cout << "Number of days must be positive." << endl;
        return 0;
    }

    vector<int> prices(n);
    cout << "Enter the stock prices for each day: ";
    for(int i=0; i<n; i++) {
        cin >> prices[i];
    }
    int profit = maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;
    return 0;
}