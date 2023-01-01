#if 0
#include <iostream>

using namespace std;

int main() {

	string word;
	int cnt = 0;
	int i = 0;

	cin >> word;

	while (i < word.length()) {

		if (word[i] == 'c') {
			if (word[i + 1] == '=') {
				i++;
			}
			else if (word[i + 1] == '-') {
				i++;
			}
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') {
				i += 2;
			}
			else if (word[i + 1] == '-') {
				i++;
			}
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			i++;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			i++;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			i++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			i++;
		}
		i++;
		cnt++;
	}

	cout << cnt;

	return 0;
}
#endif