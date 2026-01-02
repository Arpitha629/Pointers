#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longest_unique_substring(string str) {
    unordered_map<char, int> last_seen;
    int max_length = 0;
    int start = 0;

    for (int end = 0; end < str.length(); end++) {
        char current = str[end];

        
        if (last_seen.find(current) != last_seen.end() && last_seen[current] >= start) {
            start = last_seen[current] + 1;
        }

        
        last_seen[current] = end;

        
        max_length = max(max_length, end - start + 1);
    }

    return max_length;
}

int main() {
    string str;
    cin >> str;
    cout << longest_unique_substring(str) << endl;
    return 0;
}
