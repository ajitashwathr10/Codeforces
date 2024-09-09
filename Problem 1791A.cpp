#include <iostream>
#include <string>
using namespace std;

int main() {
    string target = "codeforces";
    long t; 
    cin >> t;
    while(t--) {
        string s; 
        cin >> s;
        cout << ((target.find(s) != string::npos) ? "YES" : "NO") << endl;
    }
    return 0;
}