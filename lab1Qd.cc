#include <iostream>
using namespace std;

int main() {
  double meal_cost, tip_percent;
  const double GST_RATE = 0.06;

  // Input the meal cost and tip percentage
  cout << "Enter the cost of the meal (before GST and tipping): $";
  cin >> meal_cost;
  cout << "Enter the tip percentage: ";
  cin >> tip_percent;

  // Calculate the total cost before GST and tipping
  double total_cost_before = meal_cost;

  // Calculate the total cost after GST
  double total_cost_after_GST = total_cost_before * (1 + GST_RATE);

  // Calculate the tip amount and total cost after tipping
  double tip_amount = total_cost_before * (tip_percent / 100.0);
  double total_cost_after_tipping = total_cost_after_GST + tip_amount;

  // Display the results
  cout << "Total cost before GST and tipping: $" << total_cost_before << endl;
  cout << "Total cost after GST: $" << total_cost_after_GST << endl;
  cout << "Total cost after GST and tipping: $" << total_cost_after_tipping << endl;

  return 0;
}