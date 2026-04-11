//Fibonacci Series
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: "<<"\n";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << 0 << "\n";
        }
        if (i == 2) {
            cout << 1 << "\n";
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm <<"\n";
    }
    return 0;
}