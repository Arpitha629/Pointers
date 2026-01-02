#include <iostream>
using namespace std;


void sortArray(int *arr, int n) {
    for (int *i = arr; i < arr + n - 1; i++) {
        for (int *j = i + 1; j < arr + n; j++) {
            if (*i > *j) {
                
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

