#if 0
#include <iostream>

using namespace std;

int main() {

	string word;
	int arr[26];

	fill_n(arr, 26, -1);
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--) {
		arr[word[i] - 'a'] = i;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
#endif