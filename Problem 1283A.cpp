#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int day = 24 * 60;
        int time = a * 60 + b;
        cout << day - time << endl;
    }
    return 0;
}