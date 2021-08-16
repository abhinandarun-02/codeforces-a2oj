#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, ans;
    int i, n;
    cin >> word1;
    cin >> word2;
    n = word1.length();

    for (i = 0; i < n; i++) {
        if (word1[i] == word2[i]) {
            ans += '0';
        }
        else {
            ans += '1';
        }
    }
    cout << ans;
    return 0;
}