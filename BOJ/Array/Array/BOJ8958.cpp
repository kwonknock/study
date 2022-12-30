#if 0
#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		int sum = 0;
		int add = 1;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str.at(j) == 'O') {
				sum += add;
				add++;
			}
			else {
				add = 1;
			}
		}
		cout << sum << "\n";
	}

	return 0;
}
#endif