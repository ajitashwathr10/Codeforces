#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double calculateJuice(const vector<int>& juicePercentages) {
  double totalJuice = 0.0;
  for (int juice : juicePercentages) {
    totalJuice += juice;
  }
  return totalJuice / juicePercentages.size();
}

int main() {
  int n;
  cin >> n;
  vector<int> juicePercentages(n);
  for (int i = 0; i < n; ++i) {
    cin >> juicePercentages[i];
  }

  double averageJuice = calculateJuice(juicePercentages);
  cout << averageJuice << endl;

  return 0;
}
