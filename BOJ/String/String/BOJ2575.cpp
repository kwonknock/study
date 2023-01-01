#if 0
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;

	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		string word;
		int rep;
		cin >> rep >> word;
	
		for (int j = 0; j < word.size(); j++)
		{
			for (int k = 0; k < rep; k++)
			{
				cout << word[j];
			}
		}
		cout << "\n";
	}

	return 0;
}
#endif