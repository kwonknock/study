#include <iostream>

using namespace std;

int main() {

	int num, cnt = 0;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		string str;
		int arr[26] = {0};
		bool isGroup = true;

		cin >> str;

		for (int j = 0; j < str.size(); j++) {

			while (j != str.size() - 1) {
				if (str[j] == str[j + 1]) {
					j++;
				}
				else {
					break;
				}
			}

			if (arr[str[j] - 'a'] != 0) {
				isGroup = false;
				break;
			}
			arr[str[j] - 'a']++;
		}
		if (isGroup) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}