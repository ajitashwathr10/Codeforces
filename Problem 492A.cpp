#include <iostream>
using namespace std;

int main() {
    int t, count = 0, i = 1, m = 1;
    cin >> t;
    while(m <= t) {
        m = ((i * i) + i) / 2;
        if(m > t) 
            break;
        t = t - m;
        count++;
        i++;
    }
    cout << count << endl;
    return 0;
}