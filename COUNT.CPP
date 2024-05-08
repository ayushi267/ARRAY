#include <iostream>
using namespace std;
int countElementsGreaterThan(int arr[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int result = countElementsGreaterThan(arr, size, x);
    cout << "Number of elements greater than " << x << ": " << result << endl;
    return 0;
}