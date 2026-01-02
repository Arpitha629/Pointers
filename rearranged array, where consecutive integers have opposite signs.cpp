#include <iostream>

#include <vector>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> pos, neg, result;

    for (int i = 0; i < n; i++) {

        int x;

        cin >> x;

        if (x >= 0)

            pos.push_back(x);

        else

            neg.push_back(x);

    }

    for (int i = 0; i < n/2; i++) {

        result.push_back(pos[i]);

        result.push_back(neg[i]);

    }

    // Print result, checking for leading spaces

    for (int i = 0; i < n; i++) {

        cout << result[i];

        if (i != n - 1)

            cout << " ";

    }

    cout << endl;

    return 0;

}
