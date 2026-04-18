#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nSubarrays with their sums:\n";

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];

            // print subarray
            cout << "[ ";
            for(int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << "]";

            // print sum
            cout << " -> Sum = " << sum << endl;
        }
    }

    return 0;
}