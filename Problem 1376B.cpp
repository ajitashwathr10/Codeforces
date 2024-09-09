#include <iostream>
using namespace std;

//An array is called good if the parity
//of each index matches 
//the parity of the element at that index.

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 != arr[i] % 2) {
                if(a[i]%2 == 1) {
					odd++;
				} else { 
					even++;
				}					
            }
        }
        if(odd == even){
			cout << odd << endl;
		} else {
			cout << -1 << endl;
		}
    }
	return 0;
}