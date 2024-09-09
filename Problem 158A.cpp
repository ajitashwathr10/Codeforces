#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int score;
  for (int i = 0; i < n; ++i) {
    cin >> score;
    if (score == 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}
