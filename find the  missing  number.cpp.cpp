#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int sum = 0;

    for(int i = 0; i < n-1; i++) {

        int num;

        cin >> num;

        sum += num;

    }

    int total = n * (n + 1) / 2;

    cout << total - sum << endl;

    return 0;

}
