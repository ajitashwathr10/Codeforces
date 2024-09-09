#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    int d;
    cin >> d;
    sum += d;
  }
  if (sum == 0) {
    cout << "EASY" << endl;
  } else {
    cout << "HARD" << endl;
  }
  return 0;
}
