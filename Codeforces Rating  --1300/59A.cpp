#include <iostream>
#include <string>
using namespace std;


int main()
{
    int l, upper = 0, lower = 0;
    string word;

    cin >> word;
    l = word.length();

    for (int i = 0; i < l; i++) {
        if (word[i] >= 65 && word[i] <= 90) {
            upper += 1;
        }
        else if (word[i] >= 97 && word[i] <= 122) {
            lower += 1;
        }
    }
    if (upper > lower) {
        for (int i = 0; i <= l; i++) {
            if (word[i] >= 97 && word[i] <= 122) word[i] = word[i] - 32;
        }
    }
    else {
        for (int i = 0; i <= l; i++) {
            if (word[i] >= 65 && word[i] <= 90) word[i] = word[i] + 32;
        }
    }
    cout << word;
    return 0;
}