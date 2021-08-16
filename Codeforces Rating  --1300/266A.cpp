#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, count = 0;
	string c;
	cin >> n;
	cin >> c;

	for (int i = 0; i < n - 1; i++) {
		if (c[i] == c[i + 1]) {
			count += 1;
		}
	}
	cout << count;
	return 0;
}
