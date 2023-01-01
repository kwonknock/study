#if 0
#include <iostream>

using namespace std;

int main() {

	string w1, w2, temp;
	cin >> w1 >> w2;

	for (int i = w1.size() - 1; i >= 0; i--) {
		if (w1[i] > w2[i]) {
			temp = w1;
			break;
		}
		else if (w1[i] < w2[i]) {
			temp = w2;
			break;
		}
	}

	for (int i = temp.size() - 1; i >= 0; i--) {
		cout << temp[i];
	}

	return 0;
}
#endif