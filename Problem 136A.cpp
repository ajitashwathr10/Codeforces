#include <iostream>
using namespace std;

int main() {
  int n, giver, receiver;
  cin >> n;
  int givers[n + 1];
  fill(givers, givers + n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> receiver;
    givers[receiver] = i; 
  }
  for (int i = 1; i <= n; i++) {
    cout << givers[i] << " ";
  }
  cout << endl;
  return 0;
}
