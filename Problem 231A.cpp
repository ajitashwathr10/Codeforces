#include <iostream>
#include <vector>
using namespace std;

int solve(int n) {
    int prob = 0;
    vector<vector<int> sol[n];
    for(int i = 0; i < n; i++) {
        sol[i].resize(3);
        cin >> sol[i][0] >> sol[i][1] >> sol[i][2];
    }
    for(i = 0; i < n; i++) {
        int sum = 0;
        for(int k : sol[i]) {
            sum += k;
        }
        if(sum >= 2) {
            prob++;
        }
    }
    return prob;
}
int main() {
    int n;
    cin >> n;
    int result = solve(n);
    cout << result << endl;
	return 0;
}