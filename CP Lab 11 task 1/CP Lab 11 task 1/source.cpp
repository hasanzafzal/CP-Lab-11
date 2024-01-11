#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, evenCount = 0, oddCount = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }
    cout << "\nTotal even values: " << evenCount << endl;
    cout << "Total odd values: " << oddCount << endl;

    return 0;
}
