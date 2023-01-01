#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	string word;
	int arr[26] = { 0 };
	int cnt = 0;
	char high;

	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			arr[word[i] - 'a']++;
		}
		else {
			arr[word[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if(arr[i] > cnt) {
			cnt = arr[i];
			high = i + 'A';
		}
		else if (arr[i] == cnt) {
			high = '?';
		}
	}

	cout << high;

	return 0;
}
#endif