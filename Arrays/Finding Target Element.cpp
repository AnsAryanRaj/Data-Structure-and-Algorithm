#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 56, 32, 95};
    int s = sizeof(arr) / sizeof(arr[0]);
    int target = 56;

    int result = linearsearch(arr, s, target);

    if (result != -1) {
        cout << "Element found at index = " << result << endl;
    } else {
        cout << "Element not found " << endl;
    }

    return 0;
}

/*Why size in function and s in main doesn't cause error?

You wrote:
int linearsearch(int arr[], int size, int target)

and in main():

int s = sizeof(arr)/sizeof(arr[0]);
linearsearch(arr, s, target);

This works because function parameters are independent variables.

When you call:

linearsearch(arr, s, target)

The value of s is copied into size.

So internally it becomes:

size = s

Example:

s = 4

Function receives:

size = 4

Visualization
main()                  linearsearch()

s = 4      --------->    size = 4

The variable names do not need to match.*/