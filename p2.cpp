#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int space = 1;
        while (space<= row-1 ) {
            cout << " ";
            space++;
        }

        int star = n - row + 1;
        while (star) {
            cout << "*";
            star--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
