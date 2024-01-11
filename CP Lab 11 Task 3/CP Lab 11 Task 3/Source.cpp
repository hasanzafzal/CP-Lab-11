#include <iostream>
using namespace std;

int main() {
    int arr[4][3];
    int rows = 4, cols = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter integers:" << endl;
            cin >> arr[i][j];
        }
    }
    cout << "Negative values in the array: ";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < 0) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
