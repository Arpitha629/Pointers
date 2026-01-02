#include <iostream>

#include <vector>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i < n; ++i)

        for(int j = 0; j < n; ++j)

            cin >> mat[i][j];



    for(int j = 0; j < n; ++j) {

        for(int i = n-1; i >= 0; --i) {

            cout << mat[i][j];

            if(i != 0) cout << " ";

        }

        cout << endl;

    }

    return 0;

}
