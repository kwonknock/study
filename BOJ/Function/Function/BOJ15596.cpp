#include <vector>

using namespace std;

long long sum(vector<int>& a) {

	long long total = 0;
	for (int i = 0; i < a.capacity(); i++) {
		total += a[i];
	}
	return total;
}