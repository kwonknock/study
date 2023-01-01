#if 0
#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string word;
	int cnt = 0;

	getline(cin, word);

	if (word[0] != ' ') {
		cnt++;
	}

	for (int i = 0; i < word.size(); i++) {

		if (word[i] == ' ' && i != word.size() - 1) {
			if (word[i + 1] != ' ') {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}
#endif