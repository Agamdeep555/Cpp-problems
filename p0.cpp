#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces before '*'
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print '*' for each row
        for (int j = i; j <= n; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
